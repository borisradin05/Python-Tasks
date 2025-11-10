public class Task1BookLab10112025 extends Task1ProductLab10112025 {
    private String author;
    private String title;

    public Task1BookLab10112025(String inventoryNumber, double price, int quantity, Task1ProviderLab10112025 provider, String author, String title) {
        super(inventoryNumber, price, quantity, provider);
        this.author = author;
        this.title = title;
    }
    public String getAuthor() { return author; }
    public String getTitle() { return title; }
    public void setAuthor(String author) { this.author = author; }
    public void setTitle(String title) { this.title = title; }

    @Override
    public double getPromotionalPrice() {
        return getPrice() * 0.5;
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
