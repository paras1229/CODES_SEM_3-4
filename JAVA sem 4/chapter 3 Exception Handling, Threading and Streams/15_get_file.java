/* code no 15 get file information */
import java.io.File;
class fileinfo
{
    public static void main(String args[])
    {
        File f=new File("D:\\JAVA sem 4\\chapter 2\\15_get_file.java"); //add your file path here like : d:\\foldername\\filename.extension
        if(f.exists())
        {
            System.out.println("File name: "+f.getName());
            System.out.println("Absolute path: "+f.getAbsolutePath());
            System.out.println("Writeable: "+f.canWrite());
            System.out.println("Readable: "+f.canRead());
            System.out.println("File size in bytes: "+f.length());
        }
        else
        {
            System.out.println("The file does not exist.");
        }
    }
}