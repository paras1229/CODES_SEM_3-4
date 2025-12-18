/* code no.22 */
class test
{
    // private data members
    private int age;
    public void get()
    {
        System.out.println(age);
    }
    public void set(int age)
    {
        this.age=age;
    }
}
class enc
{
    public static void main(String[] args)
    {
        test t=new test();
        t.set(19);  //setting value of age
        t.get();   // getting value of age
    }
}