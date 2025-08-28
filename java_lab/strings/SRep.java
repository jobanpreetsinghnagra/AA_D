public class SRep {
    public static void main(String[] args) {
        String input = "This is a test string with spaces";
        String result = input.replace(' ', '_');

        System.out.println("Original: " + input);
        System.out.println("Modified: " + result);
    }
}