public class Find {
    public static void main(String[] args) {
        int[] numbers = {10, 20, 30, 40, 50};
        int target = 30;
        boolean found = false;

        for (int num : numbers) {
            if (num == target) {
                found = true;
                break;
            }
        }

        if (found) {
            System.out.println(target + " is present in the array");
        } else {
            System.out.println(target + " is not present in the array");
        }
    }
}