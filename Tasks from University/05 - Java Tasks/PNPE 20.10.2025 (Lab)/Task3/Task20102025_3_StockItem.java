public class Task20102025_3_StockItem extends Task20102025_3_Product {
    public Task20102025_3_StockItem(String code, String name, double price, int quantity) {
        super(code, name, price, quantity);
    }

    @Override
    public double getTotalValue() {
        return price * quantity;
    }

    public void addStock(int amount) {
        quantity += amount;
    }

    public void removeStock(int amount) {
        if (amount <= quantity) {
            quantity -= amount;
        }
    }

    @Override
    public void printInfo() {
        super.printInfo();
        System.out.println("Current stock: " + quantity);
    }
}
