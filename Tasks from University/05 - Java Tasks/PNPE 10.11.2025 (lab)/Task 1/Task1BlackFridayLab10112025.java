public class Task1BlackFridayLab10112025 {
    public static Task1ElectronicsLab10112025[] electronics;
    public static Task1BookLab10112025[] books;

    public static void processSales() {
        Task1ProductLoaderLab10112025 loader = new Task1ProductLoaderLab10112025();
        try {
            Object[] products = loader.importDataFromFile();
            int electronicCount = 0, bookCount = 0;
            for (int i = 0; i < products.length; i++) {
                if (products[i] instanceof Task1ElectronicsLab10112025) electronicCount++;
                else if (products[i] instanceof Task1BookLab10112025) bookCount++;
            }
            electronics = new Task1ElectronicsLab10112025[electronicCount];
            books = new Task1BookLab10112025[bookCount];
            int eletronicIndex = 0, bookIndex = 0;
            for (int i = 0; i < products.length; i++) {
                if (products[i] instanceof Task1ElectronicsLab10112025)
                    electronics[eletronicIndex++] = (Task1ElectronicsLab10112025) products[i];
                else if (products[i] instanceof Task1BookLab10112025)
                    books[bookIndex++] = (Task1BookLab10112025) products[i];
            }
        } catch (Exception ex) {
            System.out.println("Error loading products: " + ex.getMessage());
        }
    }
}
