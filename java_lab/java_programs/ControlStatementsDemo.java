public class ControlStatementsDemo {
    public static void main(String[] args) {
        int x = 10;
        if (x > 0) {
            System.out.println("x is positive");
        } else {
            System.out.println("x is not positive");
        }
        for (int i = 0; i < 3; i++) {
            System.out.println("For loop iteration: " + i);
        }
        int count = 0;
        while (count < 2) {
            System.out.println("While loop count: " + count);
            count++;
        }
    }
} 