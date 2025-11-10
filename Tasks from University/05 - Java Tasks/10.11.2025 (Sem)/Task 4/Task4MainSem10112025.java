import java.io.*;
import java.util.*;

public class Task4MainSem10112025 {
    public static void main(String[] args) {
        List<Task4BookSem10112025> books = new ArrayList<>();
        books.add(new Task4BookSem10112025("Pod igoto", "Ivan Vzovz"));
        books.add(new Task4BookSem10112025("Mejduzvezdni voini", "Timothy Zahn"));
        books.add(new Task4BookSem10112025("Hobbit", "Tolkin"));
        books.add(new Task4BookSem10112025("1984", "Jorjd Oruel"));

        // Сериализация
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("books.ser"))) {
            oos.writeObject(books);
            System.out.println("Books serialized to books.ser");
        } catch (IOException e) {
            System.out.println("Serialization error: " + e.getMessage());
        }

        // Десериализация
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream("books.ser"))) {
            List<Task4BookSem10112025> loaded = (List<Task4BookSem10112025>) ois.readObject();
            System.out.println("Books loaded from file:");
            for (Task4BookSem10112025 b : loaded) {
                System.out.println(b);
            }
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("Deserialization error: " + e.getMessage());
        }
    }
}
