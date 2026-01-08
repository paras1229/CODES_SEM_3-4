/* code 6 array index out of bound exception */
class ArrayIndexOutOfBound
{
    public static void main(String args[])
    {
        try
        {
           int a[] = new int[5];
           a[6] = 9;
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Error: Array index is out of bounds.");
        }
    }
}