#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a=100,b=200;
	clrscr();
	swap(a,b);
	cout<<"value of a"<<a;
	cout<<"value of b"<<b;
	getch();
}