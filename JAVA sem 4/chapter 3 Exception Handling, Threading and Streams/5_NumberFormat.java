/* code 5 number format exception */
class NumberFormat
{
    public static void main(String args[])
    {
        try
        {
           int num = Integer.parseInt("paras");
           System.out.println(num);
        }
        catch(NumberFormatException e)
        {
            System.out.println("Error: Invalid number format.");
        }
    }
}