#include<iostream.h>
#include<conio.h>
class a
{
	public:
	void display()
	{
		cout <<"super class"<<endl;
	}
};
class b : public a
{
	public:
	void display1()
	{
		cout <<"intermediate class"<<endl;
	}
};
class c : public b
{
	public:
	void display2()
	{
		cout <<"sub class";
	}
};
void main()
{
	clrscr();
	c  c1;
	c1.display();
	c1.display1();
	c1.display2();
	getch();
}