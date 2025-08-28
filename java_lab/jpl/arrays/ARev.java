public class ARev {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};
        int[] reversed = new int[numbers.length];

        for (int i = 0; i < numbers.length; i++) {
            reversed[i] = numbers[numbers.length - 1 - i];
        }

        System.out.print("Original array: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }

        System.out.print("\nReversed array: ");
        for (int num : reversed) {
            System.out.print(num + " ");
        }
    }
}