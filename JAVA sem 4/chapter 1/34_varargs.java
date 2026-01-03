/* code no 34 varargs */
class varg 
{
    static void display(int...values)
    {
        System.out.println("Hello");
        for(int i:values)
        {
            System.out.println(i);
        }
    }
    public static void main(String[] args)
    {
        display();
        display(1,2,3,4);
        display(12,22);
    }
}