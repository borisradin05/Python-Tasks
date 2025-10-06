import java.util.Scanner;

public class Task2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        boolean inRange = number >= 1 && number <= 100;
        boolean isEven = number % 2 == 0;
        int sum = 0, temp = Math.abs(number);
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        boolean sumGreaterThan10 = sum > 10;

        if (inRange && isEven && sumGreaterThan10) {
            System.out.println("The number meets all conditions.");
        } else {
            System.out.println("The number does NOT meet all conditions.");
        }

        scanner.close();
    }
}