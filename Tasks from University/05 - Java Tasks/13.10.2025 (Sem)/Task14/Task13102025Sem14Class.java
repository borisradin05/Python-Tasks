import java.util.Scanner;

public class Task13102025Sem14Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        while (true) {
            n = scanner.nextInt();
            if (n % 10 == 0) {
                break;
            }
            System.out.println("Error: Number is not divisible by 10. Enter again:");
        }
        System.out.println("Accepted number: " + n);
    }
}
