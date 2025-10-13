import java.util.Scanner;

public class Task13102025Sem16Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n >= 1 && n % 5 == 0) {
            System.out.println("Valid!");
        } else {
            System.out.println("Invalid!");
        }
    }
}
