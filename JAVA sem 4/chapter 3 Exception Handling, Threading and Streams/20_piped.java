/* code no 20 piped stream */
import java.io.*;
class pipe
{
    public static void main(String[] args)
    {
        PipedOutputStream out=new PipedOutputStream();
        PipedInputStream in=new PipedInputStream();
        try {
            in.connect(out);
            out.write(23);
            out.write(24);
            for(int i=0; i<2; i++)
            {
                System.out.println("Data read from piped input stream: "+in.read());
            }
        }
            catch(IOException e)
            {
                System.out.println(e);
        }
    }
}