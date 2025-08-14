import java.util.Scanner;

class Condition {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 2 Numbers: ");
        int no1 = sc.nextInt();
        int no2 = sc.nextInt();

        func1(no1);       // Check sign of first number
        func2(no2);       // Check parity of second number
        func3(no1, no2);  // Compare two numbers
    }

    public static void func1(int no1) {
        if (no1 > 0) {
            System.out.println("First Number is Positive");
        } else {
            System.out.println("First Number is Negative");
        }
    }

    public static void func2(int no2) {
        if (no2 % 2 == 0) {
            System.out.println("Second Number is Even");
        } else {
            System.out.println("Second Number is Odd");
        }
    }

    public static void func3(int no1, int no2) {
        if (no1 > no2) {
            System.out.println("First Number is Greatest");
        } else if (no1 < no2) {
            System.out.println("Second Number is Greatest");
        } else {
            System.out.println("Both Numbers are Equal");
        }
    }
}
