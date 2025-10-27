import java.util.*;

public class Task5SortStringsSem27102025 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of strings: ");
        int n = sc.nextInt();
        sc.nextLine();
        String[] arr = new String[n];
        for (int i = 0; i < n; i++) {
            System.out.print("String " + (i+1) + ": ");
            arr[i] = sc.nextLine();
        }
        Arrays.sort(arr, Comparator.comparingInt(String::length));
        System.out.println("Sorted strings by length:");
        for (String s : arr) System.out.println(s);
    }
}
