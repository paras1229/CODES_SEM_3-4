/* code no.8 */
import java.util.Scanner;
class sca 
{
        public static void main(String[] args)
        {
                Scanner ob=new Scanner(System.in);

                System.out.println("Enter username :");
                String username=ob.nextLine();

                System.out.println("Enter age :");
                int age=ob.nextInt();

                System.out.println("Enter salary :");
                double salary=ob.nextDouble();

                System.out.println("username is " +username);
                System.out.println("age is " +age);
                System.out.println("salary is " +salary);
        }
}