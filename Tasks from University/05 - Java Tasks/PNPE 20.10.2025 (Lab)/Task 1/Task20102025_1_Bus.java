public class Task20102025_1_Bus implements Task20102025_1_PublicTransport {
    private int passengers;

    public Task20102025_1_Bus(int passengers) {
        this.passengers = passengers;
    }

    @Override
    public boolean isValidForPublicTransport() {
        return passengers >= 10;
    }

    @Override
    public void printPublicInfo() {
        System.out.println("Bus: Passengers: " + passengers + ", Valid: " + isValidForPublicTransport());
    }
}
