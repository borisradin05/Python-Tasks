public class Task2MainLb27102025 {
    public static void main(String[] args) {
        try {
            Task2BookLb27102025 book = new Task2BookLb27102025(20.0, 101, "Ivan Vazov", "Pod igoto");
            Task2TVLb27102025 tv = new Task2TVLb27102025(500.0, 202, "Samsung", "TV65", 150);
            System.out.printf("Book promo: %.2f\n", book.checkPromo(15));
            System.out.printf("TV promo: %.2f\n", tv.checkPromo(9));
            System.out.printf("TV energy for 1h: %.2f kWh\n", tv.calculateEnergyConsumption(1));
        } catch (Task2PriceExceptionLb27102025 | Task2PowerExceptionLb27102025 e) {
            System.out.println(e.getMessage());
        }
    }
}
