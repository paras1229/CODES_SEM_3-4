#include<iostream.h>
#include<conio.h>
inline int Max(int a,int b)
{
	return(a>b)?a:b;
}
int min(int a,int b)
{
	return(a>b)?a:b;
}
void main()
{
	clrscr();
	cout<<"Maximun="<<Max(10,29);
	cout<<"Minimun="<<Min(10,29);
	getch();
}