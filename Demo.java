import java.util.Scanner;
public class Demo
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
         System.out.println("Enter the number ");
         int n = sc.nextInt();
         int a,b;
         a = n/10; // extracts the first digit
         b = n%10; // extrracs the last digit
          System.out.println("THe value of first digit: "+a);
        System.out.println("THe value of last digit: "+b);
        int c = a+b;
        int d = a*b;
        if((c+d)==n)
         System.out.println("Special NUmber ");
         else
        System.out.println("Not Special ");
    }
}
