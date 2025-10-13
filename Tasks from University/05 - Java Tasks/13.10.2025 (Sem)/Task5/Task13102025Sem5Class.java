import java.util.Scanner;

public class Task13102025Sem5Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n >= -100 && n <= 100 && n != 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
