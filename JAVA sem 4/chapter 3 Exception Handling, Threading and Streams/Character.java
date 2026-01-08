/* code no 11 character stream */
import java.io.CharArrayReader;
import java.io.IOException;
public class Character
{
    public static void main(String[] args)
    {
        char[] array={'H','e','l','l','o'};
        try {
            CharArrayReader reader=new CharArrayReader(array);
            int charRead;
            while((charRead=reader.read())!=-1)
            {
                System.out.print((char)charRead+",");
            }
            reader.close();
        } catch (IOException e) 
          {
           // e.printStackTrace();
          }
    }
}