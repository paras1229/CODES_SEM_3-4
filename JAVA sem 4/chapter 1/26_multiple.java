/* code no.26 multiple inheritance not supported in java */
class A
{
    void msg()
    {
        System.out.println("Hello");
    }
}
class B
{
    void msg()
    {
        System.out.println("Hii");
    }
}
class C extends A,B
{
    public static void main(String[] args)
    {
        C c1=new C();
        c1.msg(); // Which msg() method to call?
    }
}