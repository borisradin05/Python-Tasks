public class Task1ProviderLab10112025 {
    private String name;
    private String phoneNumber;

    public Task1ProviderLab10112025(String name, String phoneNumber) throws Task1WrongPhoneNumberExceptionLab10112025 {
        if (!Task1ValidatePhoneLab10112025.validatePhoneNumber(phoneNumber)) {
            throw new Task1WrongPhoneNumberExceptionLab10112025("Invalid phone number");
        }
        this.name = name;
        this.phoneNumber = phoneNumber;
    }
    public String getName() { return name; }
    public String getPhoneNumber() { return phoneNumber; }
    public void setName(String name) { this.name = name; }
    public void setPhoneNumber(String phoneNumber) throws Task1WrongPhoneNumberExceptionLab10112025 {
        if (!Task1ValidatePhoneLab10112025.validatePhoneNumber(phoneNumber)) {
            throw new Task1WrongPhoneNumberExceptionLab10112025("Invalid phone number");
        }
        this.phoneNumber = phoneNumber;
    }
}
