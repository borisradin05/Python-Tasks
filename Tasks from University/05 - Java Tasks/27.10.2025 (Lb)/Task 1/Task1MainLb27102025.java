public class Task1MainLb27102025 {
    public static void main(String[] args) {
        try {
            Task1CCourseLb27102025 course = new Task1CCourseLb27102025("Junglirane");
            course.addStudent("Boris Radin", 12345);
            course.addStudent("Veselin Marinov", 23456);
            course.addScore(12345, 5);
            course.addScores(12345, new int[]{6, 4, 5});
            course.addScores(23456, new int[]{3, 5, 6});
            course.displayScores();
        } catch (Task1CourseExceptionLb27102025 e) {
            System.out.println(e.getMessage());
        } catch (Task1StudentExceptionLb27102025 e) {
            System.out.println(e.getMessage());
        } catch (Task1ScoreExceptionLb27102025 e) {
            System.out.println(e.getMessage());
        }
    }
}
