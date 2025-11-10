import java.util.Scanner;

public class Task3MainSem10112025 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Choose payment method (creditcard/paypal): ");
        String method = sc.nextLine();
        Task3PaymentMethodSem10112025 payment;
        if (method.equalsIgnoreCase("creditcard")) {
            System.out.print("Enter card number: ");
            String card = sc.nextLine();
            payment = new Task3CreditCardSem10112025(card);
        } else if (method.equalsIgnoreCase("paypal")) {
            System.out.print("Enter PayPal email: ");
            String email = sc.nextLine();
            payment = new Task3PayPalSem10112025(email);
        } else {
            System.out.println("Unknown payment method.");
            return;
        }
        System.out.print("Enter amount: ");
        double amount = sc.nextDouble();
        payment.processPayment(amount);
    }
}
