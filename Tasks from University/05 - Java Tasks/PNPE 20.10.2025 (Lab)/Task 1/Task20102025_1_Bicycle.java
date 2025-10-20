public class Task20102025_1_Bicycle extends Task20102025_1_Transport {
    private int gears;

    public Task20102025_1_Bicycle(String brand, String model, int year, int maxSpeed, int gears) {
        super(brand, model, year, maxSpeed);
        this.gears = gears;
    }

    @Override
    public void start() {
        System.out.println("Bicycle started.");
    }

    @Override
    public void stop() {
        System.out.println("Bicycle stopped.");
    }

    @Override
    public void printInfo() {
        System.out.println("Bicycle: " + brand + " " + model + ", Year: " + year + ", Max Speed: " + maxSpeed + ", Gears: " + gears);
    }
}
