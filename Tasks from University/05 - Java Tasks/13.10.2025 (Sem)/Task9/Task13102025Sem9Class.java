import java.util.Scanner;

public class Task13102025Sem9Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 1; i <= n; i++) {
            if (i % 3 != 0 && i % 7 != 0) {
                System.out.println(i);
            }
        }
    }
}
