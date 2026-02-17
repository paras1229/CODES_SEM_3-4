/* code no 5 interface */
interface A
{
    void display();
}
interface B
{
    void display1();
}
class mul implements A,B
{
    public void display()
    {
        System.out.println("interface A method");
    }
    public void display1()
    {
        System.out.println("interface B method");
    }
}
class multiple 
{
    public static void main(String args[])
    {
        mul obj=new mul();
        obj.display();
        obj.display1();
    }
}