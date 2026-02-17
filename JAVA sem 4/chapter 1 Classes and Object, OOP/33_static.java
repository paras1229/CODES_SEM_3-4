/* code no 33 static variable */
class test
{
    static int a=20; // static variable
    void display()
    {
        a++;
        System.out.println(a);
    }
}
class static_variable
{
    public static void main(String[] args)
    {
        test t1=new test();
        t1.display(); // 21
        test t2=new test();
        t2.display(); // 22
        test t3=new test();
        t3.display(); // 23
    }
}