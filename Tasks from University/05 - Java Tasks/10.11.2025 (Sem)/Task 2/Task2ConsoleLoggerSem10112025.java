public class Task2ConsoleLoggerSem10112025 implements Task2LoggerSem10112025 {
    @Override
    public void log(String message) {
        System.out.println("ConsoleLogger: " + message);
    }
}
