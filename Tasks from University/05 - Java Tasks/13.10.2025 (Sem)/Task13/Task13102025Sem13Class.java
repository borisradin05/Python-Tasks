import java.util.Scanner;

public class Task13102025Sem13Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            String input = scanner.nextLine();
            if (input.equals("Stop")) {
                break;
            }
            System.out.println(input);
        }
    }
}
