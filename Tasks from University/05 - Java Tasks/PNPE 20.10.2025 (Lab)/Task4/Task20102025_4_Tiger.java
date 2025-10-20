public class Task20102025_4_Tiger extends Task20102025_4_Animal {
    private double meatEaten;

    public Task20102025_4_Tiger(String name, int age, String species, double meatEaten) {
        super(name, age, species);
        this.meatEaten = meatEaten;
    }

    @Override
    public void feed() {
        System.out.println("Tiger " + name + " ate " + meatEaten + " kg meat.");
    }
}
