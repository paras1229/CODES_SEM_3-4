#include<iostream.h>
#include<conio.h>
class employee
{
	int emp_no;
	char e_name[10];
	double e_salary;
	public:
		void set()
		{
			cout << "enter employee no :";
			cin >> emp_no;
			cout << "enter employee name :";
			cin >> e_name;
			cout << "enter salary of employee :";
			cin >> e_salary;
			
			cout << emp_no << endl << e_name << endl << e_salary;
		}
};
void main()
{
	clrscr();
	employee  emp1;
	emp1.set();
	getch();
}