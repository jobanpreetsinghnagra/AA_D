interface Printable {
    void print();
}
class Base {
    void show() { System.out.println("Base class"); }
}
class Derived extends Base implements Printable {
    public void print() { System.out.println("Printable interface"); }
}
public class InheritanceInterfacesPackages {
    public static void main(String[] args) {
        Derived d = new Derived();
        d.show();
        d.print();
    }
} 