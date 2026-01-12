import java.io.*;
import java.net.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

// Enum for user types
enum UserType {
    ADMIN, STUDENT, TEACHER
}

// Abstract User class
abstract class User implements Serializable {
    String username;
    String password;

    abstract UserType getUserType();
}

// Admin class
class Admin extends User {
    @Override
    UserType getUserType() {
        return UserType.ADMIN;
    }
}

// Grade class
class Grade implements Serializable {
    String subject;
    int semester;
    double grade;

    Grade(String subject, int semester, double grade) {
        this.subject = subject;
        this.semester = semester;
        this.grade = grade;
    }
}

// Student class
class Student extends User {
    List<Grade> grades = new ArrayList<>();

    @Override
    UserType getUserType() {
        return UserType.STUDENT;
    }
}

// Teacher class
class Teacher extends User {
    @Override
    UserType getUserType() {
        return UserType.TEACHER;
    }
}

// Server class
public class Exam {
    private static final String USERS_FILE = "users.bin";
    private static final List<User> users = Collections.synchronizedList(new ArrayList<>());

    public static void main(String[] args) {
        loadUsers();
        try (ServerSocket serverSocket = new ServerSocket(12345)) {
            System.out.println("Server started on port 12345");
            ExecutorService executor = Executors.newCachedThreadPool();

            while (true) {
                Socket clientSocket = serverSocket.accept();
                executor.submit(() -> handleClient(clientSocket));
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void handleClient(Socket clientSocket) {
        try (ObjectInputStream in = new ObjectInputStream(clientSocket.getInputStream());
             ObjectOutputStream out = new ObjectOutputStream(clientSocket.getOutputStream())) {

            String username = (String) in.readObject();
            String password = (String) in.readObject();

            User user = authenticate(username, password);
            if (user == null) {
                out.writeObject("Invalid credentials");
                return;
            }

            out.writeObject("Login successful");

            if (user instanceof Admin) {
                handleAdmin(in, out);
            } else if (user instanceof Student) {
                handleStudent((Student) user, out);
            } else if (user instanceof Teacher) {
                handleTeacher(in, out);
            }
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }

    private static User authenticate(String username, String password) {
        synchronized (users) {
            return users.stream()
                    .filter(user -> user.username.equals(username) && user.password.equals(password))
                    .findFirst()
                    .orElse(null);
        }
    }

    private static void handleAdmin(ObjectInputStream in, ObjectOutputStream out) throws IOException, ClassNotFoundException {
        String userType = (String) in.readObject();
        String username = (String) in.readObject();
        String password = (String) in.readObject();

        if (userType.equals("STUDENT") && !username.matches("\\d{9}") || !password.matches("\\d{10}")) {
            out.writeObject("Invalid student credentials");
            return;
        }

        if (userType.equals("TEACHER") && !username.matches("[a-z]+@tu-sofia.bg") || password.length() < 5) {
            out.writeObject("Invalid teacher credentials");
            return;
        }

        User newUser = userType.equals("STUDENT") ? new Student() : new Teacher();
        newUser.username = username;
        newUser.password = password;

        synchronized (users) {
            users.add(newUser);
            saveUsers();
        }

        out.writeObject("User created successfully");
    }

    private static void handleStudent(Student student, ObjectOutputStream out) throws IOException {
        student.grades.sort(Comparator.comparingInt((Grade g) -> g.semester).thenComparing(g -> g.subject));
        StringBuilder gradesString = new StringBuilder();
        for (Grade grade : student.grades) {
            gradesString.append(grade.subject).append(" - Semester ").append(grade.semester).append(": ").append(grade.grade).append("\n");
        }
        out.writeObject(gradesString.toString());
    }

    private static void handleTeacher(ObjectInputStream in, ObjectOutputStream out) throws IOException, ClassNotFoundException {
        String studentId = (String) in.readObject();
        String subject = (String) in.readObject();
        int semester = in.readInt();
        double gradeValue = in.readDouble();

        synchronized (users) {
            User user = users.stream()
                    .filter(u -> u instanceof Student && u.username.equals(studentId))
                    .findFirst()
                    .orElse(null);

            if (user == null) {
                out.writeObject("Student not found");
                return;
            }

            Student student = (Student) user;
            student.grades.add(new Grade(subject, semester, gradeValue));
            saveUsers();
        }

        out.writeObject("Grade added successfully");
    }

    private static void loadUsers() {
        try (ObjectInputStream in = new ObjectInputStream(new FileInputStream(USERS_FILE))) {
            users.addAll((List<User>) in.readObject());
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("No existing users found. Starting fresh.");
        }
    }

    private static void saveUsers() {
        try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream(USERS_FILE))) {
            out.writeObject(users);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}