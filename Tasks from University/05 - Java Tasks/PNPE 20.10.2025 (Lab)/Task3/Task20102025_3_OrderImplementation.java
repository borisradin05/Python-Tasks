import java.util.ArrayList;
import java.util.List;

public class Task20102025_3_OrderImplementation implements Task20102025_3_Order {
    private List<Task20102025_3_StockItem> items = new ArrayList<>();

    @Override
    public void addProduct(Task20102025_3_StockItem item) {
        items.add(item);
    }

    @Override
    public double getOrderTotal() {
        double total = 0;
        for (Task20102025_3_StockItem item : items) {
            total += item.getTotalValue();
        }
        return total;
    }

    public void printOrderInfo() {
        System.out.println("Order details:");
        for (Task20102025_3_StockItem item : items) {
            item.printInfo();
        }
        System.out.println("Total order value: " + getOrderTotal());
    }
}
