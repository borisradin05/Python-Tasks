import java.util.Scanner;

public class Task13102025Sem19Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double budget = scanner.nextDouble();
        int extras = scanner.nextInt();
        double clothingPrice = scanner.nextDouble();
        double decor = budget * 0.10;
        double clothingTotal = extras * clothingPrice;
        if (extras > 150) {
            clothingTotal *= 0.90;
        }
        double total = decor + clothingTotal;
        if (total > budget) {
            System.out.println("Not enough money!");
            System.out.printf("Wingard needs %.2f leva more.\n", total - budget);
        } else {
            System.out.println("Action!");
            System.out.printf("Wingard starts filming with %.2f leva left.\n", budget - total);
        }
    }
}
