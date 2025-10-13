import java.util.Scanner;

public class Task13102025Sem18Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        long result = factorial(N) * factorial(K) / factorial(N - K);
        System.out.println("N!*K!/(N-K)! = " + result);
    }
    static long factorial(int n) {
        long f = 1;
        for (int i = 2; i <= n; i++) f *= i;
        return f;
    }
}
