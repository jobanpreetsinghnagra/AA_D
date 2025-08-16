import java.util.Scanner;

class logic{
    int sub1,sub2,sub3;
    void get_data(int x , int y , int z)
    {
        sub1 = x;
        sub2 = y;
        sub3 = z;
    }
    int pass()
    {
        // use marks directly instead of wrong percentage calculation
        int perc1 = sub1;
        int perc2 = sub2;
        int perc3 = sub3;
        int percf = (sub1 + sub2 + sub3) / 3;  // average percentage

        if(percf >= 40)
        {
            if (perc1 >= 33 && perc2>=33 && perc3>=33)
            {
                System.out.println("You Passed! ");
                return 1;
            }
        }
        else{
            System.out.println("You Failed");
            return 0;
        }
        System.out.println("You Failed");
        return 0;
    }
}
class Pass{
    public static void main(String[] args)
    {
        logic l1 = new logic();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Your Marks in all 3 Subjects out of 100:");
        int m1 = sc.nextInt();
        int m2 = sc.nextInt();
        int m3 = sc.nextInt();

        l1.get_data(m1,m2,m3);
        l1.pass();

    }
}
