public class Task2BookLb27102025 extends Task2StokiLb27102025 {
    private String author;
    private String title;

    public Task2BookLb27102025(double price, int itemNumber, String author, String title) throws Task2PriceExceptionLb27102025 {
        super(price, itemNumber);
        this.author = author;
        this.title = title;
    }

    public String getAuthor() { return author; }
    public String getTitle() { return title; }
    public void setAuthor(String author) { this.author = author; }
    public void setTitle(String title) { this.title = title; }

    @Override
    public double checkPromo(double percent) {
        return getPrice() * (1 - percent / 100.0);
    }
}
