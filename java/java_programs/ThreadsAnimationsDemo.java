public class ThreadsAnimationsDemo extends Thread {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("Thread running: " + i);
            try { Thread.sleep(500); } catch (InterruptedException e) {}
        }
    }
    public static void main(String[] args) {
        ThreadsAnimationsDemo t = new ThreadsAnimationsDemo();
        t.start();
    }
} 