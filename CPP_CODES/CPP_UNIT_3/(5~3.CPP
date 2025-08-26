#include<iostream.h>
#include<conio.h>
class base
{
	public:
	int x,y;
	base()
	{
		x=100;
		y=200;
	}
};
class der1 : public base
{
	public:
	void add()
	{
		cout <<"addition=" <<x+y <<endl;
	}
};
class der2 : public base
{
	public:
	void sub()
	{
		cout <<"subtraction=" <<x-y;
	}
};
void main()
{
	clrscr();
	der1  obj1;
	der2  obj2;
	obj1.add();
	obj2.sub();
	getch();
}
	