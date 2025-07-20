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
	~sum()
	{
		cout << "call destructor" << endl;
	}
};
void main()
{
	clrscr();
	sum  s;
}