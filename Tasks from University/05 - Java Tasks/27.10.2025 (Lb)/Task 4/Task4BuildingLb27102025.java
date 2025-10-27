public class Task4BuildingLb27102025 {
    private int height;
    private double area;
    private String address;

    public Task4BuildingLb27102025(int height, double area, String address) throws Task4BuildingExceptionLb27102025 {
        if (height <= 0 || area <= 0) throw new Task4BuildingExceptionLb27102025("Invalid height or area");
        this.height = height;
        this.area = area;
        this.address = address;
    }

    public int getHeight() { return height; }
    public double getArea() { return area; }
    public String getAddress() { return address; }
    public void setHeight(int height) throws Task4BuildingExceptionLb27102025 {
        if (height <= 0) throw new Task4BuildingExceptionLb27102025("Invalid height");
        this.height = height;
    }
    public void setArea(double area) throws Task4BuildingExceptionLb27102025 {
        if (area <= 0) throw new Task4BuildingExceptionLb27102025("Invalid area");
        this.area = area;
    }
    public void setAddress(String address) { this.address = address; }

    public void print(java.util.Scanner scanner) throws Task4BuildingExceptionLb27102025 {
        System.out.print("Height: ");
        setHeight(scanner.nextInt());
        System.out.print("Area: ");
        setArea(scanner.nextDouble());
        scanner.nextLine();
        System.out.print("Address: ");
        setAddress(scanner.nextLine());
    }

    public void print() {
        System.out.printf("Building: %d m, %.2f sq.m, Address: %s\n", height, area, address);
    }
}
