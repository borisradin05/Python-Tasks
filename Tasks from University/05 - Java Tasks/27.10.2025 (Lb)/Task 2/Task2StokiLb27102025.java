public abstract class Task2StokiLb27102025 {
    private double price;
    private int itemNumber;

    public Task2StokiLb27102025(double price, int itemNumber) throws Task2PriceExceptionLb27102025 {
        setPrice(price);
        this.itemNumber = itemNumber;
    }

    public double getPrice() { return price; }
    public int getItemNumber() { return itemNumber; }
    public void setPrice(double price) throws Task2PriceExceptionLb27102025 {
        if (price < 0) throw new Task2PriceExceptionLb27102025("Negative price");
        this.price = price;
    }
    public void setItemNumber(int itemNumber) { this.itemNumber = itemNumber; }

    public abstract double checkPromo(double percent);
}
