/* code no.10  */
import java.util.Scanner;
class condition
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter value for a: ");
        int a = sc.nextInt();
        
        System.out.print("Enter value for b: ");
        int b = sc.nextInt();
        
        if (a == b) 
        {
            System.out.println("a is equal to b");
        } 
        else
        {
            System.out.println("a is not equal to b");
        }
    }
}