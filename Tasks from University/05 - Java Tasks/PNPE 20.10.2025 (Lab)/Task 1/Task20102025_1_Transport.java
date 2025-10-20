public abstract class Task20102025_1_Transport {
    protected String brand;
    protected String model;
    protected int year;
    protected int maxSpeed;

    public Task20102025_1_Transport(String brand, String model, int year, int maxSpeed) {
        this.brand = brand;
        this.model = model;
        this.year = year;
        this.maxSpeed = maxSpeed;
    }

    public abstract void start();
    public abstract void stop();
    public abstract void printInfo();
}
