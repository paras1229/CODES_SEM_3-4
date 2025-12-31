/* code no.18  */
import java.util.*;
class typecasting
{
    public static void main(String[] args)
    {
        int x=10;
        float y;
        y=x; // implicit typecasting from int to float
        System.out.println(y);

        int a;
        double b=2.5;
        a=(int)b; // explicit typecasting from double to int
        System.out.println(a);
    }
}