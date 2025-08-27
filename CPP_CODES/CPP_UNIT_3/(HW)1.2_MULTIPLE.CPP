/* 2)write a program to perform add, sub, mul, div
   using multiple inheritance.
   NOTE: void function and get value by user */

#include<iostream.h> 
#include<conio.h>
class Addition
{
	public:
    int a, b;
    void add()
	{
        cout << "Addition: " << a + b << endl;
    }
    void getAddData()
	{
        cout << "Enter two numbers for addition: ";
        cin >> a >> b;
    }
};

class Subtraction
{
	public:
    int a, b;
    void sub()
	{
        cout << "Subtraction: " << a - b << endl;
    }
    void getSubData()
	{
        cout << "Enter two numbers for subtraction: ";
        cin >> a >> b;
    }
};
class Multiplication
{
	public:
    int a, b;
    void mul()
	{
        cout << "Multiplication: " << a * b << endl;
    }
    void getMulData()
	{
        cout << "Enter two numbers for multiplication: ";
        cin >> a >> b;
    }
};
class Division
{
	public:
    float a, b;
    void div() {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
    void getDivData() {
        cout << "Enter two numbers for division: ";
        cin >> a >> b;
    }
};
class total : public Addition, public Subtraction,
              public Multiplication, public Division
{
	public:
	void display()
	{
		getAddData();
		add();
		getSubData();
		sub();
		getMulData();
		mul();
		getDivData();
		div();
	}
};
void main()
{
	clrscr();
	total  t1;
	t1.display();
	getch();
}