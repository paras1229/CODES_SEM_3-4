#include<iostream.h>
#include<conio.h>
class employee
{
	public:
	int id;
	float salary;
	employee(int id, float salary)
	{
		this -> id = id;
		this -> salary = salary;
	}
	void display()
	{
		cout << id <<" "<<" "<<salary <<endl;
	}
};
void main()
{
	clrscr();
	employee e1=employee(101,89000);
	employee e2=employee(102,59000);
	e1.display();
	e2.display();
	getch();
}
	