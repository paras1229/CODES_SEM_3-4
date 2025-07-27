#include<iostream.h>
#include<conio.h>
class employee
{
	private:
	friend void sall();
};
void sall()
{
	int salary=4000;
	cout << "salary :" << salary;
}
void main()
{
	clrscr();
	employee  e;
	sall();
	getch();
}