import java.util.Scanner;

public class Task3MainLb27102025 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Task3EventLogLb27102025 log = new Task3EventLogLb27102025();
        while (true) {
            System.out.println("Menu: 1-Add 2-Print 3-Edit 4-Remove 5-Exit");
            int choice = scanner.nextInt();
            scanner.nextLine();
            try {
                switch (choice) {
                    case 1:
                        System.out.print("Enter event: ");
                        String event = scanner.nextLine();
                        log.addEvent(event);
                        break;
                    case 2:
                        log.print();
                        break;
                    case 3:
                        System.out.print("Enter event index to edit: ");
                        int editIdx = scanner.nextInt() - 1;
                        scanner.nextLine();
                        System.out.print("Enter new event: ");
                        String newEvent = scanner.nextLine();
                        log.editEvent(editIdx, newEvent);
                        break;
                    case 4:
                        System.out.print("Enter event index to remove: ");
                        int remIdx = scanner.nextInt() - 1;
                        log.removeEvent(remIdx);
                        break;
                    case 5:
                        System.out.println("Exiting...");
                        return;
                    default:
                        System.out.println("Invalid choice.");
                }
            } catch (Task3EventExceptionLb27102025 e) {
                System.out.println(e.getMessage());
            }
        }
    }
}
