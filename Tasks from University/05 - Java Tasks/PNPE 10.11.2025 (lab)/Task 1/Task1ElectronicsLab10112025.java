public class Task1ElectronicsLab10112025 extends Task1ProductLab10112025 {
    private String manufacturer;
    private String model;

    public Task1ElectronicsLab10112025(String inventoryNumber, double price, int quantity, Task1ProviderLab10112025 provider, String manufacturer, String model) {
        super(inventoryNumber, price, quantity, provider);
        this.manufacturer = manufacturer;
        this.model = model;
    }
    public String getManufacturer() { return manufacturer; }
    public String getModel() { return model; }
    public void setManufacturer(String manufacturer) { this.manufacturer = manufacturer; }
    public void setModel(String model) { this.model = model; }

    @Override
    public double getPromotionalPrice() {
        return getPrice() * 0.9;
    }
    @Override
    public boolean sellProduct(int piece) throws Task1NoMoreProductsExceptionLab10112025 {
        if (getQuantity() < piece) {
            throw new Task1NoMoreProductsExceptionLab10112025("No more products available");
        }
        setQuantity(getQuantity() - piece);
        return true;
    }
}
