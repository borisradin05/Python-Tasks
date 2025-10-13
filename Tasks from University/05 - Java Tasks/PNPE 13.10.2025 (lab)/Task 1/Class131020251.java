public class Class131020251 {
    public static void main(String[] args) {
        Course math = new Course("Mathematics");
        Course physics = new Course("Physics");

        Teacher teacher1 = new Teacher("Ivan Ivanov","8304152323", math);
        Teacher teacher2 = new Teacher("Maria Petrova","6905126786", physics);

        System.out.println(teacher1.GetName() + " teaches " + teacher1.GetCourse().GetCourseName());
        System.out.println(teacher2.GetName() + " teaches " + teacher2.GetCourse().GetCourseName());
    }

}
