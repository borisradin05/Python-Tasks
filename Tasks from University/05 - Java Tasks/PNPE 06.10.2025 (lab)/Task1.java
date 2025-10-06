public class Task1 {
    public static void main(String[] args) {
        
        String word = System.console().readLine();
        boolean hasUpper = false;
        boolean hasLower = false;
        boolean hasDigit = false;

        for (char ch : word.toCharArray()) {
            if (Character.isUpperCase(ch)) {
                hasUpper = true;
            }
            if (Character.isLowerCase(ch)) {
                hasLower = true;
            }
            if (Character.isDigit(ch)) {
                hasDigit = true;
            }
        }

        if (hasUpper && hasLower && hasDigit) {
            System.out.println("The text contains all required character types.");
        } else {
            System.out.println("The text not contains all types.");
        }
    }
}