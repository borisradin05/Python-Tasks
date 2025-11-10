public interface Task1ValidatePhoneLab10112025 {
    static boolean validatePhoneNumber(String phoneNumber) throws Task1WrongPhoneNumberExceptionLab10112025 {
        if (phoneNumber == null || phoneNumber.length() < 7 || !phoneNumber.matches("\\d+")) {
            throw new Task1WrongPhoneNumberExceptionLab10112025("Invalid phone number");
        }
        return true;
    }
}
