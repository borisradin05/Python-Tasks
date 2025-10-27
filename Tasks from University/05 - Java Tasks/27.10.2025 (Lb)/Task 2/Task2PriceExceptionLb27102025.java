public class Task2PriceExceptionLb27102025 extends Exception {
    public Task2PriceExceptionLb27102025(String message) {
        super(message);
    }
    @Override
    public String getMessage() {
        return "Price error: " + super.getMessage();
    }
}
