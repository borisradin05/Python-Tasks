
import java.util.Map;
import java.util.Scanner;
public class Task6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int year = Integer.parseInt(scanner.nextLine());

        Map<String, Integer> monthDays = new java.util.LinkedHashMap<>();
        monthDays.put("January", 31);
        monthDays.put("February", isLeapYear(year) ? 29 : 28);
        monthDays.put("March", 31);
        monthDays.put("April", 30);
        monthDays.put("May", 31);
        monthDays.put("June", 30);
        monthDays.put("July", 31);
        monthDays.put("August", 31);
        monthDays.put("September", 30);
        monthDays.put("October", 31);
        monthDays.put("November", 30);
        monthDays.put("December", 31);

        for (Map.Entry<String, Integer> entry : monthDays.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue() + " days");
        }
        
        scanner.close();
    }

    private static boolean isLeapYear(int year) {
        return (year % 4 == 0);
    }
}
