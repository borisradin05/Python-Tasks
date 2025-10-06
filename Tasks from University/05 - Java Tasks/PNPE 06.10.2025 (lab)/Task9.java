public class Task9 {
    public static void main(String[] args) {
        int[] numbers = {2, 4, 6, 8, 10};
        double sum = 0;
        for (int i = 0; i < numbers.length; i++) {
            sum += numbers[i];
        }
        double average = sum / numbers.length;
        System.out.println( average);
    }
}
