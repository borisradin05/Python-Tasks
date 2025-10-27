public class Task2TVLb27102025 extends Task2StokiLb27102025 implements Task2ElectricalApplianceLb27102025 {
    private String manufacturer;
    private String model;
    private double power;

    public Task2TVLb27102025(double price, int itemNumber, String manufacturer, String model, double power) throws Task2PriceExceptionLb27102025, Task2PowerExceptionLb27102025 {
        super(price, itemNumber);
        this.manufacturer = manufacturer;
        this.model = model;
        setPower(power);
    }

    public String getManufacturer() { return manufacturer; }
    public String getModel() { return model; }
    public double getPower() { return power; }
    public void setManufacturer(String manufacturer) { this.manufacturer = manufacturer; }
    public void setModel(String model) { this.model = model; }
    public void setPower(double power) throws Task2PowerExceptionLb27102025 {
        if (power < 0) throw new Task2PowerExceptionLb27102025("Negative power");
        this.power = power;
    }

    @Override
    public double checkPromo(double percent) {
        return getPrice() * (1 - percent / 100.0);
    }

    @Override
    public double calculateEnergyConsumption(double hours) {
        return power * hours;
    }
}
