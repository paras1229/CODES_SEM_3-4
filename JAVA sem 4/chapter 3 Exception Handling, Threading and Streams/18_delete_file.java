/* code no 18 delete a file */
import java.io.File;
class deletefile
{
    public static void main(String args[])
    {
        File f=new File("D:\\output.txt");  //add your folder path here like : d:\\foldername\\newfile.txt
        if(f.delete())
        {
            System.out.println("Deleted the file: "+f.getName());
        }
        else
        {
            System.out.println("Failed to delete the file.");
        }
    }
}