public class Task20102025_2_MovieTicket implements Task20102025_2_Ticket {
    private Task20102025_2_MovieProjection projection;
    private boolean purchased;

    public Task20102025_2_MovieTicket(Task20102025_2_MovieProjection projection) {
        this.projection = projection;
        this.purchased = false;
    }

    @Override
    public boolean buyTicket() {
        if (purchased == false && projection.reserveTicket()) {
            purchased = true;
            return true;
        }
        return false;
    }

    public void printTicketInfo() {
        System.out.println("Ticket for: " + projection.movie + ", DateTime: " + projection.dateTime + ", Purchased: " + purchased);
    }
}
