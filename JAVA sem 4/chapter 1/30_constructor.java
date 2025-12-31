/* code no 30 constructor */
class person
{   public
    int rollno=101;
    String name="Paras";
    person()  // default constructor
    {
        System.out.println("Roll no: "+rollno);
        System.out.println("Name: "+name);
    }
}
class constructor
{
    public static void main(String[] args)
    {
        person a=new person();  // object creation of class person
    }
}

/* code no.31 parameterized constructor */
/*  class person
{   
    public
    int rollno;
    String name;
    person(int r, String n)  // parameterized constructor
    {
        rollno=r;
        name=n;
        System.out.println("Roll no: "+rollno);
        System.out.println("Name: "+name);
    }
}
class constructor
{
    public static void main(String[] args)
    {
        person a=new person(100,"Paras");  // object creation of class person
    }
} */