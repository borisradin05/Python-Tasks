public class Task3CreditCardSem10112025 extends Task3PaymentMethodSem10112025 {
    private String cardNumber;
    public Task3CreditCardSem10112025(String cardNumber) {
        this.cardNumber = cardNumber;
    }
    @Override
    public void processPayment(double amount) {
        System.out.println("Paid " + amount + " via Credit Card: " + cardNumber);
    }
}
