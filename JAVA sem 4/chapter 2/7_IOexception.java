/* code 7 IO exception */

import java.util.Scanner;

class IOException
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner("Hello Greek!");
        System.out.println("" + scan.nextLine());
        System.out.println("Exception Output:" + scan.ioException());
        scan.close();
    }
}