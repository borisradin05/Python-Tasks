import java.util.*;

public class Task8CommonElementsSem27102025 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr1 = new int[5], arr2 = new int[5];
        System.out.println("Insert 5 numbers for the first array:");
        for (int i = 0; i < 5; i++) arr1[i] = sc.nextInt();
        System.out.println("Insert 5 numbers for the second array:");
        for (int i = 0; i < 5; i++) arr2[i] = sc.nextInt();
        Set<Integer> set1 = new HashSet<>();
        for (int n : arr1) set1.add(n);
        System.out.println("Common elements:");
        for (int n : arr2) if (set1.contains(n)) System.out.print(n + " ");
        System.out.println();
    }
}
