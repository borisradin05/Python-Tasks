import java.util.Scanner;

public class Task12 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] arr1 = new int[3];
        int[] arr2 = new int[3];
        int[] arr3 = new int[3];

        System.out.print("Insert 3 numbers for the first arr: ");
        for (int i = 0; i < 3; i++) {
            arr1[i] = scanner.nextInt();
        }

        System.out.print("Insert 3 numbers for the second arr: ");
        for (int i = 0; i < 3; i++) {
            arr2[i] = scanner.nextInt();
        }

        System.out.print("Insert 3 numbers for the third arr: ");
        for (int i = 0; i < 3; i++) {
            arr3[i] = scanner.nextInt();
        }

        int[] temp = arr1.clone();

        arr1 = arr3;
        arr3 = arr2;
        arr2 = temp;

        System.out.print("First arr: ");
        for (int x : arr1) System.out.print(x + " ");
        System.out.println();

        System.out.print("Second arr: ");
        for (int x : arr2) System.out.print(x + " ");
        System.out.println();

        System.out.print("Third arr: ");
        for (int x : arr3) System.out.print(x + " ");
        System.out.println();

        scanner.close();
    }
}
