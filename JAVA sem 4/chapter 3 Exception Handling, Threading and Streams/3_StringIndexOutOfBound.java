/* code 3 string index out of bound exception */
class StringIndexOutOfBounds
{
    public static void main(String args[])
    {
        try
        {
           String a = "Hello";
           System.out.println(a.charAt(10));
        }
        catch(StringIndexOutOfBoundsException e)
        {
            System.out.println("Error: String index is out of bounds.");
        }
    }
}