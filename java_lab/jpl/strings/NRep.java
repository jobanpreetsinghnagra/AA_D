import java.util.Scanner;

public class NRep{
    public static void main(String[] args) {
        String template = "Dear <|name|>, Thanks a lot";
        System.out.println("Enter Your Name: ");
        Scanner sc  = new Scanner(System.in);
        String name = sc.nextLine();

        String result = template.replace("<|name|>", name);

        System.out.println("Template: " + template);
        System.out.println("Final Letter: " + result);
    }
}