import java.io.Serializable;

public class Task4BookSem10112025 implements Serializable {
    private String title;
    private String author;
    public Task4BookSem10112025(String title, String author) {
        this.title = title;
        this.author = author;
    }
    public String getTitle() { return title; }
    public String getAuthor() { return author; }
    public String toString() { return title + " by " + author; }
}
