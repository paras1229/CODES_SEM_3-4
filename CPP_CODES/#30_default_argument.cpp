#include<iostream.h>
#include<conio.h>
class sample
{
	int x,y;
	public:
	void getdata(int x1,int y1=20)
	{
		x=x1;
		y=y1;
	}
	void show()
	{
		cout<<"\n x is="<<x;
		cout<<"\n y is="<<y;
	}
};
void main()
{
	clrscr();
	sample s;
	s.getdata(10);
	s.show();
	getch();
}