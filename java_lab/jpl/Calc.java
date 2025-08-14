import java.util.Scanner;

class Cal {
    static int no1;
    static int no2;
    static int fl;

    Cal(int x, int y, int operation) {
        no1 = x;
        no2 = y;
        fl = operation;
    }

    public static String operations() {
        switch (fl) {
            case 1:
                return "Sum is: " + (no1 + no2);
            case 2:
                return "Product is: " + (no1 * no2);
            case 3:
                if (no2 != 0)
                    return "Quotient is: " + (no1 / no2);
                else
                    return "Error: Division by zero!";
            default:
                return "Invalid operation!";
        }
    }
}

public class Calc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number: ");
        int x = sc.nextInt();

        System.out.println("Enter second number: ");
        int y = sc.nextInt();

        System.out.println("Enter the operation you want to do:\n 1: Addition\n 2: Multiplication\n 3: Division");
        int op = sc.nextInt();

        Cal c1 = new Cal(x, y, op);
        System.out.println("The final output is: " + c1.operations());

        sc.close();
    }
}
