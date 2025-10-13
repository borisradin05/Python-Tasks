
class PersonTask2 {
    private String firstName;
    private String lastName;
    private String birthDate;

    public PersonTask2(String firstName, String lastName, String birthDate) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.birthDate = birthDate;
    }

    public String getFirstName() { return firstName; }
    public String getLastName() { return lastName; }
    public String getBirthDate() { return birthDate; }

    public void setFirstName(String firstName) { this.firstName = firstName; }
    public void setLastName(String lastName) { this.lastName = lastName; }
    public void setBirthDate(String birthDate) { this.birthDate = birthDate; }
}

class Student extends PersonTask2 {
    private String facultyNumber;
    private double gradePIK;
    private double gradeTE;
    private double gradePPE;

    public Student(String firstName, String lastName, String birthDate,
                   String facultyNumber, double gradePIK, double gradeTE, double gradePPE) {
        super(firstName, lastName, birthDate);
        this.facultyNumber = facultyNumber;
        this.gradePIK = gradePIK;
        this.gradeTE = gradeTE;
        this.gradePPE = gradePPE;
    }

    public String getFacultyNumber() {
         return facultyNumber;
         }
    public double getGradePIK() {
         return gradePIK;
    }
    public double getGradeTE() {
         return gradeTE; 
        }
    public double getGradePPE() {
         return gradePPE; 
        }

    public void setFacultyNumber(String facultyNumber) {
         this.facultyNumber = facultyNumber;
    }
    public void setGradePIK(double gradePIK) {
         this.gradePIK = gradePIK;
    }
    public void setGradeTE(double gradeTE) {
         this.gradeTE = gradeTE;
    }
    public void setGradePPE(double gradePPE) {
         this.gradePPE = gradePPE;
    }

    public void examPIK(double grade) {
         setGradePIK(grade); 
        }
    public void examTE(double grade) {
         setGradeTE(grade);
        }
    public void examPPE(double grade) {
         setGradePPE(grade);
        }

    @Override
    public String toString() {
        return String.format("Student: %s %s, Birth: %s, FacNo: %s, PIKgrade: %.2f, TEgrade: %.2f, PPEgrade: %.2f",
                getFirstName(), getLastName(), getBirthDate(), facultyNumber, gradePIK, gradeTE, gradePPE);
    }
}

public class Class131020252 {
    public static void main(String[] args) {
        Student s = new Student("Boris", "Radin", "2005-04-15",
                "121224036", 5.50, 4.75, 6.00);

        System.out.println(s);

        s.examPIK(6.00);
        s.examTE(5.25);
        s.examPPE(5.75);

        System.out.println("After changing grades:");
        System.out.println(s);
    }
}
