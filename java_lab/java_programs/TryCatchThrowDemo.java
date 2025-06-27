public class TryCatchThrowDemo {
    public static void main(String[] args) {
        try {
            int a = 10, b = 0;
            if (b == 0) throw new ArithmeticException("Division by zero");
            System.out.println(a / b);
        } catch (ArithmeticException e) {
            System.out.println("Caught exception: " + e.getMessage());
        }
    }
} 