public class Task20102025_1_Main {
    public static void main(String[] args) {
        Task20102025_1_Car car = new Task20102025_1_Car("Honda", "Civic", 2020, 180, 4);
        car.start();
        car.printInfo();
        car.stop();

        Task20102025_1_Bicycle bicycle = new Task20102025_1_Bicycle("Bus", "5", 2022, 40, 21);
        bicycle.start();
        bicycle.printInfo();
        bicycle.stop();

        Task20102025_1_Bus bus = new Task20102025_1_Bus(25);
        bus.printPublicInfo();
    }
}
