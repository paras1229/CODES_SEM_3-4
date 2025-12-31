/* code no.24  homework */
import java.util.Scanner;
class Student
{   
    protected Scanner sc=new Scanner(System.in);
    void get()
    {
        int rollno;
        String name;
        System.out.print("Enter roll number: ");
        rollno=sc.nextInt();
        System.out.print("Enter name: ");
        name=sc.next();

        System.out.println("Roll Number: " + rollno);
        System.out.println("Name: " + name);
    }
}
class Test extends Student
{
    double marks1, marks2;
    void put()
    { 
        System.out.print("Enter marks for subject 1: ");
        marks1=sc.nextDouble();
        System.out.print("Enter marks for subject 2: ");
        marks2=sc.nextDouble();
    }
}
class Result extends Test
{
    void display()
    {
        double total=marks1 + marks2;
        System.out.println("Total marks: " + total);
    }
}
class Multilevel
{
    public static void main(String[] args)
    {
        Result r=new Result();
        r.get();
        r.put();
        r.display();
    }
}