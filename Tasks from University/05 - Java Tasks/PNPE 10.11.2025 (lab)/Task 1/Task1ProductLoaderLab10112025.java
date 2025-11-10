import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Task1ProductLoaderLab10112025 implements Task1ImportDataLab10112025 {
    private String filename = "C:\\repos\\Python-Tasks\\Tasks from University\\05 - Java Tasks\\PNPE 10.11.2025 (lab)\\Task 1\\salesproducts.txt";

    public int getNumberOfRows() throws IOException {
        int count = 0;
        try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
            while (br.readLine() != null) count++;
        }
        return count;
    }

    @Override
    public Object[] importDataFromFile() throws IOException {
        int n = getNumberOfRows();
        Object[] products = new Object[n];
        try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
            String line;
            int idx = 0;
            while ((line = br.readLine()) != null) {
                String[] parts = line.split("#");
                if (parts[0].equals("1")) {
                    Task1ProviderLab10112025 provider = new Task1ProviderLab10112025(parts[1], parts[2]);
                    products[idx++] = new Task1ElectronicsLab10112025(parts[3], Double.parseDouble(parts[4]), Integer.parseInt(parts[5]), provider, parts[6], parts[7]);
                } else if (parts[0].equals("2")) {
                    Task1ProviderLab10112025 provider = new Task1ProviderLab10112025(parts[1], parts[2]);
                    products[idx++] = new Task1BookLab10112025(parts[3], Double.parseDouble(parts[4]), Integer.parseInt(parts[5]), provider, parts[6], parts[7]);
                }
            }
        } catch (Task1WrongPhoneNumberExceptionLab10112025 e) {
            throw new IOException("Invalid phone number in file", e);
        }
        return products;
    }
}
