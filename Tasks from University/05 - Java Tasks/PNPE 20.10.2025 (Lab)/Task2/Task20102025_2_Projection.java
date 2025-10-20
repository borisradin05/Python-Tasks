public abstract class Task20102025_2_Projection {
    protected String movie;
    protected String dateTime;
    protected int freeSeats;
    protected int capacity;

    public Task20102025_2_Projection(String movie, String dateTime, int freeSeats, int capacity) {
        this.movie = movie;
        this.dateTime = dateTime;
        this.freeSeats = freeSeats;
        this.capacity = capacity;
    }

    public abstract boolean reserveTicket();
    public abstract void printInfo();
}
