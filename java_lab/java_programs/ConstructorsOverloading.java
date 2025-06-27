class Demo {
    int x;
    Demo() { x = 0; }
    Demo(int x) { this.x = x; }
}
public class ConstructorsOverloading {
    public static void main(String[] args) {
        Demo d1 = new Demo();
        Demo d2 = new Demo(10);
        System.out.println("Default constructor: x = " + d1.x);
        System.out.println("Overloaded constructor: x = " + d2.x);
    }
} 