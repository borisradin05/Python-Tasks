public class Task1PushNotificationSem10112025 implements Task1MessageSem10112025 {
    private String deviceId;
    private String message;

    public Task1PushNotificationSem10112025(String deviceId, String message) {
        this.deviceId = deviceId;
        this.message = message;
    }
    @Override
    public void send() {
        System.out.println("Sending PUSH to device " + deviceId + ": " + message);
    }
}
