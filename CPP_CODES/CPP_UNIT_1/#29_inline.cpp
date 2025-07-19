#include<iostream.h>
#include<conio.h>
inline int max(int a,int b)
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
	cout<<"Maximun="<<max(10,29);
	cout<<"Minimun="<<min(10,29);
	getch();
}