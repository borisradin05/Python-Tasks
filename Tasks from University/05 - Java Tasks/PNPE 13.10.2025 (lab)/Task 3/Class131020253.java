class ElectronicDevice {
    private double voltage;
    private String cpuModel;
    private boolean isOn;

    public ElectronicDevice(double voltage, String cpuModel) {
        this.voltage = voltage;
        this.cpuModel = cpuModel;
        this.isOn = false;
    }

    public double getVoltage() {
        return voltage;
    }

    public void setVoltage(double voltage) {
        this.voltage = voltage;
    }

    public String getCpuModel() {
        return cpuModel;
    }

    public void setCpuModel(String cpuModel) {
        this.cpuModel = cpuModel;
    }

    public boolean isOn() {
        return isOn;
    }

    public void turnOn() {
        isOn = true;
    }

    public void turnOff() {
        isOn = false;
    }
}

class Laptop extends ElectronicDevice {
    private int ramSize;
    private int hddSize; 

    public Laptop(double voltage, String cpuModel, int ramSize, int hddSize) {
        super(voltage, cpuModel);
        this.ramSize = ramSize;
        this.hddSize = hddSize;
    }

    public int getRamSize() {
        return ramSize;
    }

    public void setRamSize(int ramSize) {
        this.ramSize = ramSize;
    }

    public int getHddSize() {
        return hddSize;
    }

    public void setHddSize(int hddSize) {
        this.hddSize = hddSize;
    }

    public boolean isBetter(Laptop other) {
        return this.ramSize > other.ramSize && this.hddSize > other.hddSize;
    }

    @Override
    public String toString() {
        return "Laptop{" +
                "voltage=" + getVoltage() +
                ", cpuModel='" + getCpuModel() + '\'' +
                ", isOn=" + isOn() +
                ", ramSize=" + ramSize +
                ", hddSize=" + hddSize +
                '}';
    }
}

class Class131020253 {
    public static void main(String[] args) {
        Laptop laptop1 = new Laptop(19.5, "Intel i5", 8, 512);
        Laptop laptop2 = new Laptop(19.5, "AMD Ryzen 7", 16, 1024);

        laptop1.turnOn();
        System.out.println(laptop1);
        System.out.println(laptop2);

        System.out.println("Is 2 better than 1? " + " " +  laptop2.isBetter(laptop1));
    }
}
