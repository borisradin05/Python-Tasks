import java.util.Scanner;

public class Task13102025Sem1Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first integer: ");
        int a = scanner.nextInt();
        System.out.print("Enter second integer: ");
        int b = scanner.nextInt();
        System.out.println("Greater number: " + (a > b ? a : b));
    }
}
