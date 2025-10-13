import java.util.Scanner;

public class Task13102025Sem4Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter day of week (English): ");
        String day = scanner.nextLine();
        switch(day.toLowerCase()) {
            case "monday":
            case "tuesday":
            case "wednesday":
            case "thursday":
            case "friday":
                System.out.println("Working day");
                break;
            case "saturday":
            case "sunday":
                System.out.println("Weekend");
                break;
            default:
                System.out.println("Error");
        }
    }
}
