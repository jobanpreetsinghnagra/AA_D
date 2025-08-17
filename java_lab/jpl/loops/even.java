import java.util.Scanner;

public class even {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        int i = 1;   // Counter
        int sum = 0; // Store sum

        while (i <= n) {
            sum += 2 * i; // i-th even number = 2*i
            i++;
        }

        System.out.println("Sum of first " + n + " even numbers = " + sum);
    }
}
