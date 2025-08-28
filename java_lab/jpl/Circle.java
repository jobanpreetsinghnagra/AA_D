import java.util.Scanner;

class Circle{

    public static void main(String[] args)
    {
        final double PIE = 3.147;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the radius 'R' of circle:");
        double r = sc.nextDouble();

        double peri = (2*PIE)*r;
        double area =(2*PIE)*(r*r);

        System.out.println("The perimeter of circle is:"+peri+"\n and the area is:"+area);

    }
}