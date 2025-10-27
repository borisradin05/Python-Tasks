public class Task4HouseLb27102025 extends Task4BuildingLb27102025 {
    private int floors;
    private String owner;

    public Task4HouseLb27102025(int height, double area, String address, int floors, String owner) throws Task4BuildingExceptionLb27102025 {
        super(height, area, address);
        if (floors <= 0) throw new Task4BuildingExceptionLb27102025("Invalid floors");
        this.floors = floors;
        this.owner = owner;
    }

    public int getFloors() { return floors; }
    public String getOwner() { return owner; }
    public void setFloors(int floors) throws Task4BuildingExceptionLb27102025 {
        if (floors <= 0) throw new Task4BuildingExceptionLb27102025("Invalid floors");
        this.floors = floors;
    }

    public void setOwner(String owner) {
         this.owner = owner; 
        }

    @Override
    public void print(java.util.Scanner scanner) throws Task4BuildingExceptionLb27102025 {
        super.print(scanner);
        System.out.print("Floors: ");
        setFloors(scanner.nextInt());
        scanner.nextLine();
        System.out.print("Owner: ");
        setOwner(scanner.nextLine());
    }

    @Override
    public void print() {
        super.print();
        System.out.printf("Floors: %d, Owner: %s\n", floors, owner);
    }

    public double avgFloorHeight() {
        return getHeight() / (double) floors;
    }
}
