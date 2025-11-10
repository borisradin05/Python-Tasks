public class Task2ApplicationSem10112025 {
    private Task2LoggerSem10112025 logger;
    public Task2ApplicationSem10112025(Task2LoggerSem10112025 logger) {
        this.logger = logger;
    }
    public void logInfo(String message) {
        logger.log(message);
    }
}
