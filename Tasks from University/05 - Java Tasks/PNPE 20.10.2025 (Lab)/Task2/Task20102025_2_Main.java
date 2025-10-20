public class Task20102025_2_Main {
    public static void main(String[] args) {
        Task20102025_2_MovieProjection projection = new Task20102025_2_MovieProjection("Ivan", "20.10.2025 - 19:00", 5, 100);
        projection.printInfo();
        Task20102025_2_MovieTicket ticket = new Task20102025_2_MovieTicket(projection);
        if (ticket.buyTicket()) {
            System.out.println("Ticket purchased!");
        } else {
            System.out.println("No tickets available!");
        }
        ticket.printTicketInfo();
        projection.printInfo();
    }
}
