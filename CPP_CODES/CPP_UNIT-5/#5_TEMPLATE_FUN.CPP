#include<iostream.h>
#include<conio.h>
template <class T>
void show( T a, T b )
{
	cout << "a:" << a << endl << "b:" << b << endl;
}
void main()
{
	int p=10 , q=20;
	char m='a', n='b';
	float s=10.45, f=12.45;
	clrscr();
	show(p,q);
	show(m,n);
	show(s,f);
	getch();
}