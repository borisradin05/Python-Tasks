public class Task2Main27102025Lb {
    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        int[] numbers = new int[5];
        int sum = 0;

        for (int i = 0; i < numbers.length; i++) {
            System.out.print("Enter whole number: ");
            numbers[i] = scanner.nextInt();
            sum += numbers[i];
        }

    double average = (double) sum / numbers.length;
    System.out.println("Average is: " + average);
    }
}
