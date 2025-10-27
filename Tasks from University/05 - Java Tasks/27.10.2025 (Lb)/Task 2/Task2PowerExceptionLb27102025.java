public class Task2PowerExceptionLb27102025 extends Exception {
    public Task2PowerExceptionLb27102025(String message) {
        super(message);
    }
    @Override
    public String getMessage() {
        return "Power error: " + super.getMessage();
    }
}
