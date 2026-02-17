/* code no 16 write to a file */
import java.io.FileWriter;
import java.io.IOException;
class writefile
{
    public static void main(String args[])
    {
        try {
            FileWriter fwrite=new FileWriter("d:\\output.txt"); //add your folder path here like : d:\\foldername\\output.txt
            fwrite.write("A file location used to store related.\n");
            fwrite.write("Writing to files in Java is easy!\n");
            fwrite.close();
            System.out.println("Successfully wrote to the file.");
        } catch (IOException e) 
        {
            System.out.println("An error occurred.");
        }
    }
}