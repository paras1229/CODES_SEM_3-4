/* code no 12 byte stream */
import java.io.ByteArrayInputStream;
public class ByteStream
{
    public static void main(String[] args)
    {
        byte[] array={10,20,30,40};
        try {
            ByteArrayInputStream input=new ByteArrayInputStream(array);
            System.out.println("The bytes read from the input stream:");
            for(int i=0; i<array.length; i++)
            {
                int data=input.read();
                System.out.print(data+",");
            }
            input.close();
            } catch (Exception e)
            {
                //e.printStackTrace();
            }
        }
}