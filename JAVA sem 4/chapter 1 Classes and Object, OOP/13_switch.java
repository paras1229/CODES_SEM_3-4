/* code no.13 */
import java.util.*;
class dc 
{
    public static void main(String[] args)
    {
        int a,b,ch;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a:");
        a=sc.nextInt();
        System.out.println("Enter b:");
        b=sc.nextInt();
        System.out.println("Enter 1.Addi 2.Sub 3.Mul 4.Div:");
        ch=sc.nextInt();
        switch(ch)
        {
            case 1:
                System.out.println("Addition is:"+(a+b));
                break;
            case 2:
                System.out.println("Subtraction is:"+(a-b));
                break;
            case 3:
                System.out.println("Multiplication is:"+(a*b));
                break;
            case 4:
                System.out.println("Division is:"+(a/b));
                break;
            default:
                System.out.println("Invalid choice");
                break;
        }
    }
}