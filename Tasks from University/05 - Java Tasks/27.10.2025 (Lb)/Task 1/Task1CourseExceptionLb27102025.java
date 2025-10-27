public class Task1CourseExceptionLb27102025 extends Exception {
    public Task1CourseExceptionLb27102025(String message) {
        super(message);
    }
    @Override
    public String getMessage() {
        return "Course error: " + super.getMessage();
    }
}
