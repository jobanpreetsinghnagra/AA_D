import java.util.Scanner;

class Okay{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Username: ");
        String userName = sc.nextLine();

        System.out.println("Enter Age: ");
        int age_u = sc.nextInt();

        System.out.println("Username is:"+userName+ " and the age is:"+age_u);
    }
}