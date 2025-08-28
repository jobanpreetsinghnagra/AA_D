public class Asum {
    public static void main(String[] args) {
        float[] numbers = {2.5f, 3.7f, 1.2f, 4.8f, 5.1f};
        float sum = 0;

        for (int i = 0; i < numbers.length; i++) {
            sum += numbers[i];
        }

        System.out.println("Sum of array elements: " + sum);
    }
}