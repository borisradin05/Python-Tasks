public class Task1MainLab10112025 {
    public static void main(String[] args) {
        try {
            Task1ProviderLab10112025 provider = new Task1ProviderLab10112025("K&K Electronics LTD", "0878457123");
            Task1ElectronicsLab10112025 electronics = new Task1ElectronicsLab10112025("868978787", 1500.0, 200, provider, "LG", "86UH955V");
            System.out.println(electronics.getPromotionalPrice());
            System.out.println(electronics.sellProduct(10));
            System.out.println(electronics.getQuantity());
            Task1BookLab10112025 book = new Task1BookLab10112025("673568573", 25.99, 1000, provider, "Terry Pratchett", "Small Gods");
            System.out.println( book.getPromotionalPrice());
            System.out.println(book.sellProduct(5));
            System.out.println(book.getQuantity());

            System.out.println("\nProductLoader Try");
            Task1ProductLoaderLab10112025 loader = new Task1ProductLoaderLab10112025();
            Object[] products = loader.importDataFromFile();
            for (Object obj : products) {
                if (obj instanceof Task1ElectronicsLab10112025) {
                    Task1ElectronicsLab10112025 e = (Task1ElectronicsLab10112025)obj;
                    System.out.println("Electronics: " + e.getManufacturer() + " " + e.getModel() + ", price: " + e.getPrice());
                } else if (obj instanceof Task1BookLab10112025) {
                    Task1BookLab10112025 b = (Task1BookLab10112025)obj;
                    System.out.println("Book: " + b.getAuthor() + ", title: " + b.getTitle() + ", price: " + b.getPrice());
                }
            }

            System.out.println("\nBlackFriday Try");
            Task1BlackFridayLab10112025.processSales();
            System.out.println("Electronics for sale:");
            if (Task1BlackFridayLab10112025.electronics != null) {
                for (Task1ElectronicsLab10112025 e : Task1BlackFridayLab10112025.electronics) {
                    System.out.println(e.getManufacturer() + " " + e.getModel() + " - Promotional price: " + e.getPromotionalPrice());
                }
            }
            System.out.println("Books for sale:");
            if (Task1BlackFridayLab10112025.books != null) {
                for (Task1BookLab10112025 b : Task1BlackFridayLab10112025.books) {
                    System.out.println(b.getAuthor() + ": " + b.getTitle() + " - Promotional price: " + b.getPromotionalPrice());
                }
            }
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
