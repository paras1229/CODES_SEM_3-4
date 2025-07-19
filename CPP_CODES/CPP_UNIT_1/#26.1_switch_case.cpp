#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch;
	cout<<"enter any number(1 to 7)";
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"today is mon";
		case 2:
		cout<<"today is tue";
		case 3:
		cout<<"today is wed";
		case 4:
		cout<<"today is thur";
		case 5:
		cout<<"today is fri";
		case 6:
		cout<<"today is sat";
		case 7:
		cout<<"today is sun";
		default:
		cout<<"only enter value 1 to 7";
		}
	getch();
}
		