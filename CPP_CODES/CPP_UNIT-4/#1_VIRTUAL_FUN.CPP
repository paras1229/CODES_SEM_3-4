#include<iostream.h>
#include<conio.h>
class a
{
	public:
	void show()	
	{
		cout << "base class";
	
	}
};
class b: public a
{
	public:
	void show()
	{
		cout << "derived class";
	}
};
void main()
{
	clrscr();
	a *bptr;
	a  a1;
	bptr =&a1;
	bptr -> show();
	getch();
}
