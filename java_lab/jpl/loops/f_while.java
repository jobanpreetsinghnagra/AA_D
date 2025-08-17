import java.util.Scanner;

public class f_while {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();

        int i = 1;
        long fact = 1;
        while (i <= n) {
            fact *= i;
            i++;
        }

        System.out.println("Factorial of " + n + " = " + fact);
    }
}
