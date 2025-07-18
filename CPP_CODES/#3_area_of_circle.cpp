#include<iostream.h>
#include<conio.h>
class circle
{
	public:
		double radi;
		double area;
		void compute()
		{
			area = 3.14 * radi * radi;
		}
};
void main()
{
	clrscr();
	circle  c;
	c.radi = 5.5;
	cout << "radious :" << c.radi;
	c.compute();
	cout << "area :" << c.area;
 	getch();
}
