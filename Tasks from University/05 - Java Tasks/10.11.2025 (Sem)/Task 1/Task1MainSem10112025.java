public class Task1MainSem10112025 {
    public static void main(String[] args) {
        Task1MessageSem10112025 email = Task1MessageFactorySem10112025.createMessage("email", "boris@ivan.com", "Hello", "Gosho is an email message.");
        Task1MessageSem10112025 sms = Task1MessageFactorySem10112025.createMessage("sms", "0888123456", "SMS message.");
        Task1MessageSem10112025 push = Task1MessageFactorySem10112025.createMessage("push", "telefon123", "This is a push notification.");

        email.send();
        sms.send();
        push.send();
    }
}
