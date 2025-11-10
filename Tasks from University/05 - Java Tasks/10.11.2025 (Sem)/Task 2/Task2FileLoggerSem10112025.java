import java.io.FileWriter;
import java.io.IOException;

public class Task2FileLoggerSem10112025 implements Task2LoggerSem10112025 {
    private String filename = "log.txt";
    @Override
    public void log(String message) {
        try (FileWriter fw = new FileWriter(filename, true)) {
            fw.write(message + "\n");
        } catch (IOException e) {
            System.out.println("FileLogger error: " + e.getMessage());
        }
    }
}
