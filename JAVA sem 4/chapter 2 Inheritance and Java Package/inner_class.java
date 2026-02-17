/* code no 7 inner class */
class A
{
    int x=10;
    class B
        {
            int y=5;
        }
}
public class main
{
    public static void main(String args[])
    {
        A  a1 = new A();
        A.B  b1 = a1.new B();
        System.out.println(b1.y + a1.x);
    }
}