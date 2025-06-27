public class ArmstrongNumber {
    static boolean isArmstrong(int n) {
        int sum = 0, temp = n, digits = Integer.toString(n).length();
        while (temp > 0) {
            int d = temp % 10;
            sum += Math.pow(d, digits);
            temp /= 10;
        }
        return sum == n;
    }
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        System.out.println(n + " is Armstrong? " + isArmstrong(n));
        sc.close();
    }
} 