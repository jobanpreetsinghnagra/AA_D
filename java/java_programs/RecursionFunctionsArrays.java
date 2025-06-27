public class RecursionFunctionsArrays {
    static int sumArray(int[] arr, int n) {
        if (n <= 0) return 0;
        return sumArray(arr, n - 1) + arr[n - 1];
    }
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Enter array size: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.println("Sum using recursion: " + sumArray(arr, n));
        sc.close();
    }
} 