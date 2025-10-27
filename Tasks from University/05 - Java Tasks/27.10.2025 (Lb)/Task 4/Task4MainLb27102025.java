import java.util.Scanner;

public class Task4MainLb27102025 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            System.out.print("Number of houses: ");
            int n = scanner.nextInt();
            scanner.nextLine();
            Task4HouseLb27102025[] houses = new Task4HouseLb27102025[n];
            for (int i = 0; i < n; i++) {
                System.out.println("House " + (i + 1) + ":");
                houses[i] = new Task4HouseLb27102025(1, 1.0, "", 1, "");
                houses[i].print(scanner);
            }
            System.out.println("All houses:");
            for (Task4HouseLb27102025 h : houses) h.print();
            Task4HouseLb27102025 mostSpacious = findMostSpacious(houses);
            System.out.println("Most spacious house:");
            mostSpacious.print();
        } catch (Task4BuildingExceptionLb27102025 e) {
            System.out.println(e.getMessage());
        }
    }

    public static Task4HouseLb27102025 findMostSpacious(Task4HouseLb27102025[] houses) {
        Task4HouseLb27102025 best = houses[0];
        for (Task4HouseLb27102025 h : houses) {
            if (h.avgFloorHeight() > best.avgFloorHeight()) best = h;
        }
        return best;
    }
}
