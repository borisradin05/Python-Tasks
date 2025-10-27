import java.util.Scanner;

public class Task3MaxSem27102025 {
    public static int findMax(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) max = arr[i];
        }
        return max;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
    System.out.println("Enter 5 whole numbers:");
    for (int i = 0; i < arr.length; i++) arr[i] = sc.nextInt();
    System.out.println("The largest number is: " + findMax(arr));
    }
}
