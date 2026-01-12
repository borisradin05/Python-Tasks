import java.io.*;
import java.net.*;
import java.util.*;
import java.util.regex.*;

enum UserType { ADMIN, STUDENT, TEACHER }

abstract class User implements Serializable {
    String username;
    String password;
    abstract UserType getUserType();
}

class Admin extends User {
    UserType getUserType() { return UserType.ADMIN; }
}

class Grade implements Serializable {
    String subject;
    int semester;
    double value;
}

class Student extends User {
    String facultyNumber;
    String egn;
    List<Grade> grades = new ArrayList<>();
    UserType getUserType() { return UserType.STUDENT; }
}

class Teacher extends User {
    UserType getUserType() { return UserType.TEACHER; }
}

class UserStorage {
    static final String FILE = "users.bin";
    static List<User> users = new ArrayList<>();

    static synchronized void load() throws Exception {
        File f = new File(FILE);
        if (!f.exists()) return;
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream(f));
        users = (List<User>) ois.readObject();
        ois.close();
    }

    static synchronized void save() throws Exception {
        ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(FILE));
        oos.writeObject(users);
        oos.close();
    }

    static synchronized User find(String u, String p) {
        for (User user : users)
            if (user.username.equals(u) && user.password.equals(p))
                return user;
        return null;
    }

    static synchronized Student findStudentByFN(String fn) {
        for (User u : users)
            if (u instanceof Student && ((Student) u).facultyNumber.equals(fn))
                return (Student) u;
        return null;
    }
}

class ClientHandler extends Thread {
    Socket socket;

    ClientHandler(Socket s) { socket = s; }

    public void run() {
        try {
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);

            String u = in.readLine();
            String p = in.readLine();
            User user = UserStorage.find(u, p);

            if (user == null) {
                out.println("ERROR");
                socket.close();
                return;
            }

            if (user instanceof Admin) {
                String type = in.readLine();
                if (type.equals("STUDENT")) {
                    String fn = in.readLine();
                    String egn = in.readLine();
                    if (!fn.matches("\\d{9}") || !egn.matches("\\d{10}")) return;
                    Student s = new Student();
                    s.username = fn;
                    s.password = egn;
                    s.facultyNumber = fn;
                    s.egn = egn;
                    UserStorage.users.add(s);
                }
                if (type.equals("TEACHER")) {
                    String email = in.readLine();
                    String pass = in.readLine();
                    if (!email.matches("[a-z]+@tu-sofia.bg") || pass.length() < 5) return;
                    Teacher t = new Teacher();
                    t.username = email;
                    t.password = pass;
                    UserStorage.users.add(t);
                }
                UserStorage.save();
            }

            if (user instanceof Student) {
                Student s = (Student) user;
                s.grades.sort(Comparator
                        .comparingInt((Grade g) -> g.semester)
                        .thenComparing(g -> g.subject));
                StringBuilder sb = new StringBuilder();
                for (Grade g : s.grades)
                    sb.append(g.semester).append(" ").append(g.subject).append(" ").append(g.value).append("\n");
                out.println(sb.toString());
            }

            if (user instanceof Teacher) {
                String fn = in.readLine();
                String subj = in.readLine();
                int sem = Integer.parseInt(in.readLine());
                double val = Double.parseDouble(in.readLine());
                Student s = UserStorage.findStudentByFN(fn);
                if (s != null) {
                    Grade g = new Grade();
                    g.subject = subj;
                    g.semester = sem;
                    g.value = val;
                    s.grades.add(g);
                    UserStorage.save();
                }
            }

            socket.close();
        } catch (Exception e) { }
    }
}

public class Server {
    public static void main(String[] args) throws Exception {
        UserStorage.load();
        ServerSocket ss = new ServerSocket(5555);
        while (true)
            new ClientHandler(ss.accept()).start();
    }
}
