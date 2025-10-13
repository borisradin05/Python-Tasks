import java.util.Scanner;

public class Task13102025Sem20Class {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Figure type:");
        String figure = scanner.next();
        double area = 0.0;
        switch (figure) {
            case "square":
                System.out.println("Side:");
                double side = scanner.nextDouble();
                area = side * side;
                break;
            case "rectangle":
                System.out.println("Side 1:");
                double a = scanner.nextDouble();
                System.out.println("Side 2:");
                double b = scanner.nextDouble();
                area = a * b;
                break;
            case "circle":
                System.out.println("Radius:");
                double r = scanner.nextDouble();
                area = Math.PI * r * r;
                break;
            case "triangle":
                System.out.println("Base:");
                double base = scanner.nextDouble();
                System.out.println("Height:");
                double height = scanner.nextDouble();
                area = (base * height) / 2.0;
                break;
            default:
                System.out.println("Error!");
                return;
        }
        System.out.printf("Area: %.2f\n", area);
    }
}
