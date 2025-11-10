public class Task1SMSMessageSem10112025 implements Task1MessageSem10112025 {
    private String phoneNumber;
    private String text;

    public Task1SMSMessageSem10112025(String phoneNumber, String text) {
        this.phoneNumber = phoneNumber;
        this.text = text;
    }
    @Override
    public void send() {
        System.out.println("Sending SMS to " + phoneNumber + ": " + text);
    }
}
