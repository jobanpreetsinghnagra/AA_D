public class BinarySearch {
    static int binarySearch(int[] arr, int key) {
        int l = 0, r = arr.length - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == key) return m;
            if (arr[m] < key) l = m + 1;
            else r = m - 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Enter array size: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter sorted array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Enter key to search: ");
        int key = sc.nextInt();
        int idx = binarySearch(arr, key);
        if (idx != -1)
            System.out.println("Key found at index: " + idx);
        else
            System.out.println("Key not found");
        sc.close();
    }
} 