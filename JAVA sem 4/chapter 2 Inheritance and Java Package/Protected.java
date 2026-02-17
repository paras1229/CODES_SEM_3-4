/* code no 2 Access Specifier : Protected */
class A
{
    protected int data=40;
}
public class Protected
{
    public static void main(String args[])
    {
        A obj=new A();
        System.out.println("Data is: "+obj.data);
    }
}