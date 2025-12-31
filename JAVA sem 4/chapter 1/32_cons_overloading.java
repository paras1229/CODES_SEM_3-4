/* code no.32 constructor overloading */
class cons
{   public
    int roll;
    String name;
    cons()
    {
        System.out.println("hello");
    }
    cons(int r)
    {
        roll=r;
    }
    cons(int r, String n)
    {
        roll=r;
        name=n;
    }
    void show()
    {
        public static void main(String[] args)
        {
            cons c=new cons();
            cons c1=new cons(101);
            cons c2=new cons(102,"Paras");
            c1.show();
            c2.show();
        }
    }
}