public class MirrorInverseArray {
    static boolean isMirrorInverse(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[arr[i]] != i) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Enter array size: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.println("Mirror Inverse? " + isMirrorInverse(arr));
        sc.close();
    }
} 