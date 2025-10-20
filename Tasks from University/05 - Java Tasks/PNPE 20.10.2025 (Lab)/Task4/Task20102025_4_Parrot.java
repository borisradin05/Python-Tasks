public class Task20102025_4_Parrot extends Task20102025_4_Animal implements Task20102025_4_Flyable {
    private String featherColor;

    public Task20102025_4_Parrot(String name, int age, String species, String featherColor) {
        super(name, age, species);
        this.featherColor = featherColor;
    }

    @Override
    public void feed() {
        System.out.println("Parrot " + name + " is eating seeds.");
    }

    @Override
    public void fly() {
        System.out.println("Parrot " + name + " is flying.");
    }
}
