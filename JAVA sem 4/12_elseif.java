/* code no.12 */
import java.util.*;
class marks
{
    public static void main(String[] args)
    {
        int marks;
        Scanner m=new Scanner(System.in);
        System.out.println("Enter your marks:");
        marks=m.nextInt();
       
        if(marks>=80)
        {
            System.out.println("You are Topper");
        }
        else if(marks>=70)
        {
            System.out.println("You are First Class");
        }
        else if(marks>=60)
        {
            System.out.println("You are Second Class");
        }
        else if(marks>=40)
        {
            System.out.println("You are Third Class");
        }
        else
        {
            System.out.println("You are Fail");
        }
    }
}