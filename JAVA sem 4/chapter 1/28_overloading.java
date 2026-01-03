/* code no 28 method overloading */
class overload
{
    void add(int a, int b, int c)
    {
        System.out.println(a + b + c);
    }
    void add(int a, int b)
    {
        System.out.println(a + b);
    }
}
class method1
{
    public static void main(String[] args)
    {
        overload obj=new overload();
        obj.add(2, 3, 4);
        obj.add(1,2);
    }
}