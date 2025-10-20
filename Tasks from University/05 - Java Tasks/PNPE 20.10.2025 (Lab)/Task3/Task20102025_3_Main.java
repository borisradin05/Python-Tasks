public class Task20102025_3_Main {
    public static void main(String[] args) {
        Task20102025_3_StockItem item1 = new Task20102025_3_StockItem("A1", "Mlqko", 2.5, 10);
        Task20102025_3_StockItem item2 = new Task20102025_3_StockItem("B2", "Hleb", 1.2, 20);
        item1.printInfo();
        item2.printInfo();
        item1.addStock(5);
        item2.removeStock(3);
        item1.printInfo();
        item2.printInfo();
        Task20102025_3_OrderImplementation order = new Task20102025_3_OrderImplementation();
        order.addProduct(item1);
        order.addProduct(item2);
        order.printOrderInfo();
    }
}
