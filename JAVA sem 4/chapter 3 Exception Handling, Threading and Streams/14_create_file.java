/* code no 14 create file */
import java.io.File;
import java.io.IOException;
class createFile
{
    public static void main(String args[])
    {
        try {
            File f=new File("d:\\newfile.txt");  //add your folder path here like : d:\\foldername\\newfile.txt
            if(f.createNewFile())
            {
                System.out.println("File created: "+f.getName());
            }
            else
            {
                System.out.println("File already exists.");
            }
            } catch (IOException e) 
            {
                System.out.println("An error occurred.");
               // e.printStackTrace();
        }
    }
}