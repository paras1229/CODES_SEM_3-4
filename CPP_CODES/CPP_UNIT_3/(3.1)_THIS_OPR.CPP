#include<iostream.h>
#include<conio.h>
class test
{
	private:
	int x;
	
	public:
	void setx( int x )
	{
		this ->x = x;
	}
	void print()
	{
		clrscr();
		test  obj;
		int x = 20;
		obj.setx(20);
		obj.print();
		getch();
	}