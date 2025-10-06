public class Task7 {
    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        int day = scanner.nextInt();
        java.util.Map<Integer, String> days = new java.util.HashMap<>();
        days.put(1, "Monday");
        days.put(2, "Tuesday");
        days.put(3, "Wednesday");
        days.put(4, "Thursday");
        days.put(5, "Friday");
        days.put(6, "Saturday");
        days.put(7, "Sunday");
        String result = days.getOrDefault(day, "Invalid day");
        System.out.println(result);
        
        scanner.close();
    }
}
