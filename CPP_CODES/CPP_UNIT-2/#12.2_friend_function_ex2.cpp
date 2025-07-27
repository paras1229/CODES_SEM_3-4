#include<iostream.h>
#include<conio.h>
class largest
{
	private:
	int a,b;

	public:
		largest()
		{
			a=10;
			b=20;
		}
		friend void max( largest& l );
};
void max( largest& l )
{
	if( l.a>l.b )
	{
		cout << "a is greater.";
	}
	else{
		cout << "b is greater.";
	}
}
void main()
{
	clrscr();
	largest  l1;
	max(l1);
	getch();
}