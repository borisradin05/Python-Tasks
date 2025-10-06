public class Task3 {
    public static void main(String[] args) {
        char start;
        char end;

        java.util.Scanner scanner = new java.util.Scanner(System.in);

        System.out.print("Enter start character: ");
        start = scanner.next().charAt(0);

        System.out.print("Enter end character: ");
        end = scanner.next().charAt(0);

        for (char c = Character.toLowerCase(start); c <= Character.toLowerCase(end); c++) {
            System.out.print(c + " ");
        }

        scanner.close();
    }
}
