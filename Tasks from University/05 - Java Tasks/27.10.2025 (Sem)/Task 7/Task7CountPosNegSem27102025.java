import java.util.Scanner;

public class Task7CountPosNegSem27102025 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        int pos = 0, neg = 0;
        System.out.println("Insert 10 numbers:");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] > 0) pos++;
            else if (arr[i] < 0) neg++;
        }
        System.out.println("Positive: " + pos);
        System.out.println("Negative: " + neg);
    }
}
