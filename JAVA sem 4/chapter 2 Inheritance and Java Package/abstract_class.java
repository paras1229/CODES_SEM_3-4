/* code no 8 abstract class */
abstract class bike
{
    abstract void run();
    void display()
    {
        System.out.println("bike is running");
    }
}
class honda extends bike
{
    void run()
    {
        System.out.println("running safely");
    }
}
class abstract_class
{
    public static void main(String args[])
    {
        honda h=new honda();
        h.run();
        h.display();
    }
}