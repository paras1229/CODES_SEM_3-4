/* code 4 file not found exception */
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
class FileNotFound
{
    public static void main(String args[])
    {
        try
        {
           File file = new File("D://file.txt");
           FileReader fr = new FileReader(file);
        }
        catch(FileNotFoundException e)
        {
            System.out.println("Error: The specified file was not found.");
        }
    }
}