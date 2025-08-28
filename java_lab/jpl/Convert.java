import java.util.Scanner;

class Convert{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the conversion you want to do:\n 1.Km to Miles \n 2.Farenheit to Celsius \n 3.Celsius to Farenheit\n");
        int select_c = sc.nextInt();
        if(select_c ==1){
            System.out.println("Kms to Miles \n");
            System.out.println("Enter Kms: ");
            float km_u = sc.nextFloat();
            double mi_u = km_u/1.609;
            System.out.println("The miles are: "+mi_u);
        }
        else if (select_c == 2)
        {
            System.out.println("Farenheit to Celsius: \n");
            System.out.println("Enter F: ");
            double faren = sc.nextDouble();
            double c_u = (faren -32)/1.8;
            System.out.println("The celsius is are: "+c_u);
        }
        else
        {
            System.out.println("Celsius to Farenheit");
            System.out.println("Enter C: ");
            double c_u = sc.nextDouble();
            double faren = (c_u*1.8) + 32;
            System.out.println("The farenheit  is are: "+faren);
        }
    }
}