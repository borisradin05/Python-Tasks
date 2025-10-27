public class Task1CCourseLb27102025 {
    private Task1CStudentLb27102025[] studentList;
    private String name;
    private int studentCount;

    public Task1CCourseLb27102025(String name) {
        this.name = name;
        this.studentList = new Task1CStudentLb27102025[30];
        this.studentCount = 0;
    }

    public String getName() { return name; }

    public void addStudent(String studentName, int fn) throws Task1CourseExceptionLb27102025 {
        if (studentCount >= studentList.length) throw new Task1CourseExceptionLb27102025("Course is full");
        studentList[studentCount++] = new Task1CStudentLb27102025(studentName, fn);
    }

    public void addScore(int fn, int grade) throws Task1StudentExceptionLb27102025, Task1ScoreExceptionLb27102025 {
        Task1CStudentLb27102025 student = findStudent(fn);
        if (student == null) throw new Task1StudentExceptionLb27102025("Student not found");
        student.addScore(grade);
    }

    public void addScores(int fn, int[] grades) throws Task1StudentExceptionLb27102025, Task1ScoreExceptionLb27102025 {
        Task1CStudentLb27102025 student = findStudent(fn);
        if (student == null) throw new Task1StudentExceptionLb27102025("Student not found");
        for (int grade : grades) student.addScore(grade);
    }

    public void displayScores() {
        for (int i = 0; i < studentCount; i++) {
            Task1CStudentLb27102025 s = studentList[i];
            System.out.print("Name: " + s.getName() + ", FN: " + s.getFn() + ", Scores: ");
            int[] scores = s.getScores();
            for (int score : scores) System.out.print(score + " ");
            System.out.printf("| Avg: %.2f\n", s.getGrade());
        }
    }

    private Task1CStudentLb27102025 findStudent(int fn) {
        for (int i = 0; i < studentCount; i++) {
            if (studentList[i].getFn() == fn) return studentList[i];
        }
        return null;
    }
}
