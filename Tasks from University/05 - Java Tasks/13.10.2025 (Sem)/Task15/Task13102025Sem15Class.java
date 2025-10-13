import java.util.Scanner;

public class Task13102025Sem15Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int hour = scanner.nextInt();
        int minute = scanner.nextInt();
        minute += 15;
        if (minute >= 60) {
            hour++;
            minute -= 60;
        }
        if (hour == 24) {
            hour = 0;
        }
        System.out.printf("%d:%02d\n", hour, minute);
    }
}
