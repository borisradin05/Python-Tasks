import java.util.Scanner;
import java.util.ArrayList;

public class Task10RemoveElementSem27102025 {
    public static int[] removeElement(int[] arr, int x) {
        ArrayList<Integer> list = new ArrayList<>();

        for (int n : arr) if (n != x) list.add(n);
        
        int[] res = new int[list.size()];

        for (int i = 0; i < list.size(); i++) res[i] = list.get(i);
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter count of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Number to remove: ");
        int x = sc.nextInt();
        int[] res = removeElement(arr, x);
        System.out.println("New array:");
        for (int v : res) System.out.print(v + " ");
        System.out.println();
    }
}
