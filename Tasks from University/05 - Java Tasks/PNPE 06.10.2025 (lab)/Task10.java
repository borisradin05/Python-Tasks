import java.util.Scanner;

public class Task10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Insert count of numbers (n): ");
        int n = scanner.nextInt();
        int[] arr = new int[n];

        System.out.println("Insert " + n + " numbers from 0 to 9:");
        for (int i = 0; i < n; i++) {
            int num;
            do {
                num = scanner.nextInt();
            } while (num < 0 || num > 9);
            arr[i] = num;
        }

        for (int i = 0; i < n; i++) {
            arr[i] = 10 - arr[i];
        }

        for (int num : arr) {
            System.out.print(num + " ");
        }
        scanner.close();
    }
}
