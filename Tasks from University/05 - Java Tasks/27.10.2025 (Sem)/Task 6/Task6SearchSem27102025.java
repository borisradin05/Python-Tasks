import java.util.Scanner;

public class Task6SearchSem27102025 {
    public static boolean search(int[] arr, int x) {
        for (int n : arr) if (n == x) return true;
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        System.out.println("Insert 5 numbers:");
        for (int i = 0; i < arr.length; i++) arr[i] = sc.nextInt();
        System.out.print("Search element: ");
        int x = sc.nextInt();
        System.out.println(search(arr, x) ? "Element found." : "Element not found.");
    }
}
