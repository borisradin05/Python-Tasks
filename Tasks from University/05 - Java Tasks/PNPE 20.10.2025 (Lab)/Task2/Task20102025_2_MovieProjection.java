public class Task20102025_2_MovieProjection extends Task20102025_2_Projection {
    public Task20102025_2_MovieProjection(String movie, String dateTime, int freeSeats, int capacity) {
        super(movie, dateTime, freeSeats, capacity);
    }

    @Override
    public boolean reserveTicket() {
        if (freeSeats > 0) {
            freeSeats--;
            return true;
        }
        return false;
    }

    @Override
    public void printInfo() {
        System.out.println("Movie: " + movie + ", DateTime: " + dateTime + ", Free Seats: " + freeSeats + ", Capacity: " + capacity);
    }
}
