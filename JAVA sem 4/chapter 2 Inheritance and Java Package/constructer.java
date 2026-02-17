/* code no 4 constructor */
class parent
{
    parent()
    {
        System.out.println("parent class constructor");
    }
}
class child extends parent
{
    child()
    {
        System.out.println("child class constructor");
    }
}
class constructer
{
    public static void main(String args[])
    {
        child c=new child();
    }
}