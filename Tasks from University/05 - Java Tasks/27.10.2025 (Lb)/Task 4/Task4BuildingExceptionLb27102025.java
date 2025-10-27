public class Task4BuildingExceptionLb27102025 extends Exception {
    public Task4BuildingExceptionLb27102025(String message) {
        super(message);
    }
    @Override
    public String getMessage() {
        return "Building error: " + super.getMessage();
    }
}
