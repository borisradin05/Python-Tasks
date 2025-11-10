public class Task1MessageFactorySem10112025 {
    public static Task1MessageSem10112025 createMessage(String type, String... args) {
        switch (type.toLowerCase()) {
            case "email":
                return new Task1EmailMessageSem10112025(args[0], args[1], args[2]);
            case "sms":
                return new Task1SMSMessageSem10112025(args[0], args[1]);
            case "push":
                return new Task1PushNotificationSem10112025(args[0], args[1]);
            default:
                throw new IllegalArgumentException("Unknown message type: " + type);
        }
    }
}
