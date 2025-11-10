public class Task1EmailMessageSem10112025 implements Task1MessageSem10112025 {
    private String recipient;
    private String subject;
    private String body;

    public Task1EmailMessageSem10112025(String recipient, String subject, String body) {
        this.recipient = recipient;
        this.subject = subject;
        this.body = body;
    }
    @Override
    public void send() {
        System.out.println("Sending EMAIL to " + recipient + ": " + subject + " - " + body);
    }
}
