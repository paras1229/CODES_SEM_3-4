/* (1)write a program to perform add, sub, mul, div
   using multiple inheritance.
NOTE: enter value by user */

#include <iostream.h>
#include <conio.h>

class Addition
{
	public:
    int add(int a, int b)
    {
        return a + b;
    }
};
class Subtraction
{
	public:
    int sub(int a, int b)
    {
        return a - b;
    }
};
class Multiplication
{
	public:
    int mul(int a, int b)
    {
        return a * b;
    }
};
class Division
{
	public:
    float div(int a, int b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return (float)a / b;
    }
};

class Total : public Addition, public Subtraction,
			  public Multiplication, public Division
{
	public:
    void display()
    {
        int x, y;
        cout << "Enter two numbers: ";
        cin >> x >> y;

        cout << "\nAddition = " << add(x, y);
        cout << "\nSubtraction = " << sub(x, y);
        cout << "\nMultiplication = " << mul(x, y);
        cout << "\nDivision = " << div(x, y);
    }
};
void main()
{
    clrscr();
    Total t1;
    t1.display();
    getch();
}