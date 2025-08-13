#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
	clrscr();
	char str1[10]="hello";
	char str2[10];
	strcpy(str2,str1);
	cout<<str2;
	getch();
}