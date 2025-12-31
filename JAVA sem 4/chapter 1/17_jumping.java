/* code no.17 */
import java.util.*;
class jumping 
{
    public static void main(String[] args)
    {
        int i;
        for(i=1;i<=10;i++)
        {
            if(i==5)
            {
                continue; // skip the iteration when i is 5
            }
            System.out.println(i);
            if(i==8)
            {
                break; // exit the loop when i is 8
            }
        }
    }
}