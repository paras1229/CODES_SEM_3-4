#include<iostream.h>
#include<conio.h>
class sum
{
	int a,b,c;
	public:
	sum()
	{
		a = 10;
		b = 20;
		c = a+b;
		cout << "sum is " << c << endl;
	}
	~sum()   // destructor as same as class_name and starting with ~ sign
	{
		cout << "call destructor" << endl;
	}
};
void main()
{
	clrscr();
	sum  s;
}
