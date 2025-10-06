import java.util.Scanner;

public class Task11 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Insert number n: ");
        int n = scanner.nextInt();
        int[] arr1 = new int[n];
        System.out.println("Insert elements of the first array:");
        for (int i = 0; i < n; i++) {
            arr1[i] = scanner.nextInt();
        }

        System.out.print("Insert number m: ");
        int m = scanner.nextInt();
        int[] arr2 = new int[m];
        System.out.println("Insert elements of the second array:");
        for (int i = 0; i < m; i++) {
            arr2[i] = scanner.nextInt();
        }

        int[] arr3 = new int[n + m];
        int index = 0;

        for (int i = m - 1; i >= 0; i--) {
            arr3[index++] = arr2[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            arr3[index++] = arr1[i];
        }

        for (int i = 0; i < arr3.length; i++) {
            System.out.print(arr3[i] + " ");
        }
        System.out.println();
        scanner.close();
    }
}
