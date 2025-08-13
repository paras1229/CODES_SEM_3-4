#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
	clrscr();
	char str1[10]="hello";
	char str2[10]="world";
	if(strcmp(str1,str2))
	{
		cout<<"string is equal";
	}else
	{
		cout<<"not equal";
	}
	getch();
}