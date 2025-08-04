#include<iostream.h>
#include<conio.h>
template <class T>
class show
{
	T a,b;
	public:
	show( T p, T q )
	{
		a=p; b=q;
	}
	void show()
	{
		cout << "a:" << a << endl << "b:" << b << endl;
	}
};
void main()
{
	show <int> ob(10,20);
	clrscr();
	ob.show();
	getch();
}