/* code no 1 Access Specifier : Public */
class A
{
    public int data=40;
}
public class Public
{
    public static void main(String args[])
    {
        A obj=new A();
        System.out.println("Data is: "+obj.data);
    }
}