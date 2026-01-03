/* code no.9 */
import java.util.Scanner;
class age
{
        public static void main(String[] args)
        {
                Scanner a=new Scanner(System.in);

                System.out.println("Enter your age :");
                int age=a.nextInt();

                if(age>=18)
                {
                    System.out.println("valid for voting.");
                }
               System.out.println("Thank you.");
        }
}