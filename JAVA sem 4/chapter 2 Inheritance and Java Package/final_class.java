/* code no 10 final class */
final class bike
{

}
class java extends bike
{
    void display()
    {
        System.out.println("This is a final class example");
    }
    public static void main(String args[])
    {
        bike b=new bike();
        b.display();  // compile time error
    }
}