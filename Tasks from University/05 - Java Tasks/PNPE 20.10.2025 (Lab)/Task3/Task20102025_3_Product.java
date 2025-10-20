public abstract class Task20102025_3_Product {
    protected String code;
    protected String name;
    protected double price;
    protected int quantity;

    public Task20102025_3_Product(String code, String name, double price, int quantity) {
        this.code = code;
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    public abstract double getTotalValue();
    
    public void printInfo() {
        System.out.println("Product: " + name + " (" + code + ") Price: " + price + ", Quantity: " + quantity);
    }
}
