#include<iostream.h>
#include<conio.h>
int num(const int x=5)
{
	x++;
	return x;
}
void main()
{
	clrscr();
	cout<<num();
	getch();
}