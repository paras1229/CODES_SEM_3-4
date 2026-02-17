/* code no 13 file class */
import java.io.*;
class filedemo
{
    public static void main(String args[])
    {
        File f=new File("d:\\paras.java");
        if(f.isFile())
        {
            System.out.println("\n File Exists");
        }
        else
        {
            System.out.println("\n File does not Exists");
        }
   }
}