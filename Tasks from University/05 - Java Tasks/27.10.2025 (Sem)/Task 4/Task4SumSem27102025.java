import java.util.Scanner;

public class Task4SumSem27102025 {
    public static int sum(int[] arr) {
        int s = 0;
        for (int n : arr) s += n;
        return s;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Insert number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.println("The sum is: " + sum(arr));
    }
}
