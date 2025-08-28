public class AvgM {
    public static void main(String[] args) {
        int[] physicsMarks = {85, 92, 78, 88, 95, 83};
        int total = 0;

        for (int mark : physicsMarks) {
            total += mark;
        }

        double average = (double) total / physicsMarks.length;
        System.out.println("Average marks in Physics: " + average);
    }
}