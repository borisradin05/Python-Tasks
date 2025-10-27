public class Task3EventExceptionLb27102025 extends Exception {
    public Task3EventExceptionLb27102025(String message) {
        super(message);
    }
    @Override
    public String getMessage() {
        return "Event error: " + super.getMessage();
    }
}
