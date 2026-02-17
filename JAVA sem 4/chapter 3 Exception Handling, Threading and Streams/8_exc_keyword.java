/* code no 8 java exception keyword */
class exc
{
    public static void main(String args[])
    {
        try
        {
            int a= 5/10;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Arithmetic Exception");
        }
        finally
        {
            System.out.println("Finally block executed");
        }
    }
}