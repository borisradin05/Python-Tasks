public abstract class Task1ProductLab10112025 {
    private String inventoryNumber;
    private double price;
    private int quantity;
    private Task1ProviderLab10112025 provider;

    public Task1ProductLab10112025(String inventoryNumber, double price, int quantity, Task1ProviderLab10112025 provider) {
        this.inventoryNumber = inventoryNumber;
        this.price = price;
        this.quantity = quantity;
        this.provider = provider;
    }
    public String getInventoryNumber() { return inventoryNumber; }
    public double getPrice() { return price; }
    public int getQuantity() { return quantity; }
    public Task1ProviderLab10112025 getProvider() { return provider; }
    public void setInventoryNumber(String inventoryNumber) { this.inventoryNumber = inventoryNumber; }
    public void setPrice(double price) { this.price = price; }
    public void setQuantity(int quantity) { this.quantity = quantity; }
    public void setProvider(Task1ProviderLab10112025 provider) { this.provider = provider; }

    public abstract double getPromotionalPrice();
    public abstract boolean sellProduct(int piece) throws Task1NoMoreProductsExceptionLab10112025;
}
