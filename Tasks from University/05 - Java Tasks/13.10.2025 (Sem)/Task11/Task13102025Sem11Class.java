import java.util.Scanner;

public class Task13102025Sem11Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            if (num < min) min = num;
            if (num > max) max = num;
        }
        System.out.println("Min: " + min);
        System.out.println("Max: " + max);
    }
}
