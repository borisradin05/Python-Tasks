public class Task1Main27102025 {
    public static void main(String[] args) {
        int[] arr = new int[10];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = i + 1;
        }
        System.out.println("The array is:");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
