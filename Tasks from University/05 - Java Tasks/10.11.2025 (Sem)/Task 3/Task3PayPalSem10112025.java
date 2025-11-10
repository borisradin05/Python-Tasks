public class Task3PayPalSem10112025 extends Task3PaymentMethodSem10112025 {
    private String email;
    public Task3PayPalSem10112025(String email) {
        this.email = email;
    }
    @Override
    public void processPayment(double amount) {
        System.out.println("Paid " + amount + " via PayPal: " + email);
    }
}
