import java.util.Scanner;

public class Task13102025Sem17Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        if (K <= 1 || N <= K) {
            System.out.println("Invalid input");
            return;
        }
        long result = factorial(N) / factorial(K);
        System.out.println("N!/K! = " + result);
    }
    static long factorial(int n) {
        long f = 1;
        for (int i = 2; i <= n; i++) f *= i;
        return f;
    }
}
