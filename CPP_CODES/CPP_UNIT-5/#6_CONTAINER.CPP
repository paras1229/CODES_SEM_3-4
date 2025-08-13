#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void show()
	{
		cout<<"hello from first class";
	}
};
class B : public A
{
	A  obj;
	public:
	void display()
	{
		cout<<"hello from second class \n";
	}
};
void main()
{
	clrscr();
	B  obj2;
	obj2.display();
	obj2.show();
	getch();
}