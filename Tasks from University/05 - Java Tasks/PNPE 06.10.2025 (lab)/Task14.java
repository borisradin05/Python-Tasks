public class Task14 {
    public static boolean isPravoagalenTriangle(double a, double b, double c) {

        if (a + b <= c || a + c <= b || b + c <= a) {
            return false;
        }

        return a * a + b * b == c * c ||
               a * a + c * c == b * b ||
               b * b + c * c == a * a;
    }

    public static void main(String[] args) {
        System.out.println(isPravoagalenTriangle(3, 4, 5));
        System.out.println(isPravoagalenTriangle(5, 5, 5));
    }
}
