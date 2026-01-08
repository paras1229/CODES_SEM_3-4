/* code no 17 read from a file */
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
class readfile
{
    public static void main(String args[])
    {
        try {
            File f=new File("D:\\JAVA sem 4\\chapter 2\\17_read_to_file.java"); //add your folder path here like : d:\\foldername\\newfile.txt
            Scanner sc=new Scanner(f);
            while(sc.hasNextLine())
            {
                String line=sc.nextLine();
                System.out.println(line);
            }
            sc.close();
        } catch (FileNotFoundException e) 
        {
            System.out.println("An error occurred.");
            //e.printStackTrace();
        }
    }
}