/* code no 3 Access Specifier : Private */
class A
{
    private int data=40;
}
public class Private
{
    public static void main(String args[])
    {
        A obj=new A();
        //System.out.println("Data is: "+obj.data); // will generate error as data is private
    }
}