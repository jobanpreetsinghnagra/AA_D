public class Calculator {
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.println("Enter first number:");
        double a = sc.nextDouble();
        System.out.println("Enter second number:");
        double b = sc.nextDouble();
        System.out.println("Choose operation (+, -, *, /):");
        char op = sc.next().charAt(0);
        double result = 0;
        switch(op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': result = b != 0 ? a / b : Double.NaN; break;
            default: System.out.println("Invalid operation"); return;
        }
        System.out.println("Result: " + result);
        sc.close();
    }
} 