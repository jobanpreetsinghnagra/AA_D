public class PalindromeCheck {
    static boolean isPalindrome(String s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s.charAt(l++) != s.charAt(r--)) return false;
        }
        return true;
    }
    static boolean isPalindrome(int n) {
        return isPalindrome(Integer.toString(n));
    }
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.next();
        System.out.println(str + " is palindrome? " + isPalindrome(str));
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println(num + " is palindrome? " + isPalindrome(num));
        sc.close();
    }
} 