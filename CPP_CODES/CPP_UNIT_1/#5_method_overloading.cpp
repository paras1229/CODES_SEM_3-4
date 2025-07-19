#include<iostream.h>
#include<conio.h>
class addition
{
	int sum;
	public:
	void add( int a , int b )
	{
		sum = a+b;
		cout<<"sum="<<sum;
	}
	void add( float x , float y , float z )
	{
		float s;
		s = x+y+z;
		cout<<"s="<<s;
	}
};
void main()
{
	clrscr();
	addition a1;
	a1.add( 10,20 );
	a1.add( 10.5 , 20.9 , 13.6 );
	getch();
}