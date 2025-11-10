public class Task2MainSem10112025 {
    public static void main(String[] args) {
        Task2ApplicationSem10112025 appConsole = new Task2ApplicationSem10112025(new Task2ConsoleLoggerSem10112025());
        appConsole.logInfo("Logging to console");
        Task2ApplicationSem10112025 appFile = new Task2ApplicationSem10112025(new Task2FileLoggerSem10112025());
        appFile.logInfo("Logging to file");
        System.out.println("Check log.txt for file output.");
    }
}
