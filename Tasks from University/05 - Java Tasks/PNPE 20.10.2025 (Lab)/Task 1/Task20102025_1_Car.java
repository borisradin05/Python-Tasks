public class Task20102025_1_Car extends Task20102025_1_Transport {
    private int doors;

    public Task20102025_1_Car(String brand, String model, int year, int maxSpeed, int doors) {
        super(brand, model, year, maxSpeed);
        this.doors = doors;
    }

    @Override
    public void start() {
        System.out.println("Car started.");
    }

    @Override
    public void stop() {
        System.out.println("Car stopped.");
    }

    @Override
    public void printInfo() {
        System.out.println("Car: " + brand + " " + model + ", Year: " + year + ", Max Speed: " + maxSpeed + ", Doors: " + doors);
    }
}
