public class Task1StudentExceptionLb27102025 extends Exception {
    public Task1StudentExceptionLb27102025(String message) {
        super(message);
    }
    @Override
    public String getMessage() {
        return "Student error: " + super.getMessage();
    }
}
