/* code no.11 */
import java.util.*;
class nestedif
{
    public static void main(String[] args)
    {
        int a,b,c;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter three numbers:");
        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();
        if(a>b)
        {
            if(a>c)
            {
                System.out.println("a is greatest");
            }
            else
            {
                System.out.println("c is greatest");
            }
        }
        else
        {
            if(b>c)
            {
                System.out.println("b is greatest");
            }
            else
            {
                System.out.println("c is greatest");
            }
        }
    }
}