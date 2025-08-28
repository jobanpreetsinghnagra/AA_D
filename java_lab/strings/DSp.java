public class DSp {
    public static void main(String[] args) {
        String input = "This  is   a test    string with  double   and triple spaces";

        System.out.println("Input: " + input);

        // Check for double spaces
        if (input.contains("  ")) {
            System.out.println("Double spaces detected!");
        } else {
            System.out.println("No double spaces found.");
        }

        // Check for triple spaces
        if (input.contains("   ")) {
            System.out.println("Triple spaces detected!");
        } else {
            System.out.println("No triple spaces found.");
        }
    }
}