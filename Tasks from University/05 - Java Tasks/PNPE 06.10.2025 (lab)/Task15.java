import java.util.*;

public class Task15 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        String[] names = new String[n];
        double[] prices = new double[n];
        int[] qty = new int[n];

        for (int i = 0; i < n; i++) {
            String[] parts = scanner.nextLine().split(" ");
            names[i] = parts[0];
            prices[i] = Double.parseDouble(parts[1]);
            qty[i] = Integer.parseInt(parts[2]);
        }

        double discountPercent = Double.parseDouble(scanner.nextLine());
        double total = 0;
        double[] subtotals = new double[n];
        for (int i = 0; i < n; i++) {
            subtotals[i] = lineTotal(prices[i], qty[i]);
            total += subtotals[i];
        }

        double discountSum = discount(total, discountPercent);
        double totalAfterDiscount = total - discountSum;
        double vatSum = vat(totalAfterDiscount, 20.0);
        double grandTotal = totalAfterDiscount + vatSum;

        System.out.printf("%-15s %7s %5s %8s\n", "Item", "Price", "Quantity", "Total");
        for (int i = 0; i < n; i++) {
            printRow(names[i], prices[i], qty[i], subtotals[i]);
        }
        System.out.println("-------------------------------");
        System.out.printf("%-20s %10.2f\n", "Total:", total);
        System.out.printf("%-20s %10.2f\n", "Discount:", discountSum);
        System.out.printf("%-20s %10.2f\n", "With VAT:", grandTotal);

        scanner.close();
    }

    static double lineTotal(double price, int qty) {
        return price * qty;
    }

    static double discount(double subtotal, double percent) {
        return subtotal * (percent / 100.0);
    }

    static double vat(double base, double rate) {
        return base * (rate / 100.0);
    }

    static void printRow(String name, double price, int qty, double total) {
        System.out.printf("%-15s %8.2f %6d %10.2f%n", name, price, qty, total);
    }
}
