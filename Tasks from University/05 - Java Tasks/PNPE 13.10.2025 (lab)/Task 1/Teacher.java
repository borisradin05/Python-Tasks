public class Teacher extends PersonTask1 {
    private Course course;

    public Teacher(String name, String EGN, Course course) {
        super(name, EGN);
        this.course = course;
    }

    public Course GetCourse() {
        return course;
    }

    public void setCourse(Course course) {
        this.course = course;
    }
}
