#include<iostream.h>
#include<conio.h>
class base
{
	public:
	void test()
	{
		cout<<"base class";
	}
};
class derived
{
	public:
	void test()
	{
		cout<<"derived class";
	}
};
void main()
{
	clrscr();
	derived d;
	//d.base::test();
	d.test();
	getch();
}