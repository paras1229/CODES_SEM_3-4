/* code no 19 random access file class */
import java.io.*;
class random
{
    public static void main(String args[])
    {
        try {
            RandomAccessFile f=new RandomAccessFile("d:\\paras.txt","rw"); //add your folder path here like : d:\\foldername\\newfile.txt
            f.writeChar('k');
            f.writeInt(12);
            f.writeDouble(12.5);
            f.seek(0); //move the file pointer to the beginning
            System.out.println(f.readChar());
            System.out.println(f.readInt());
            System.out.println(f.readDouble());
            f.seek(2);
            System.out.println(f.readInt());
            f.close();
        } catch (IOException e) 
        {
           System.out.println(e);
        }
    }
}