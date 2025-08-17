public class pattern {
    public static void main(String[] args) {
        // Outer loop controls rows (5 rows total)
        for (int i = 5; i >= 1; i--) {
            // Inner loop prints stars for each row
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println(); // Move to next line after each row
        }

        int i = 5;
        while (i >= 1) {
            int j = 1;
            while (j <= i) {
                System.out.print("* ");
                j++;
            }
            System.out.println();
            i--;
        }
    }
}
