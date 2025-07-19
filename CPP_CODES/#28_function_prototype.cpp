#include<iostream.h>
#include<conio.h>
void MAX(int a,int b);
void main()
{
	clrscr();
	MAX(10,20);
}
void MAX(int a,int b)
{
	if(a>b)
	{	
		cout<<"a is greater"<<a;
	}
	else
	{
		cout<<"b is greater"<<b;
	}
}