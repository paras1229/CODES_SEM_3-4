#include<iostream.h>
#include<conio.h>
class distance
{
	public:
	int feet, inch;
	distance( int f, int i )
	{
		this -> feet = f;
		this -> inch =i;
	}
	void operator-()
	{
		feet--;
		inch--;
		cout <<"\n Feet & Inches(decrement);"<< feet <<""<< inch;
	}
};
void main()
{
	clrscr();
	distance  d1(8,9);
	-d1;
	getch();
}