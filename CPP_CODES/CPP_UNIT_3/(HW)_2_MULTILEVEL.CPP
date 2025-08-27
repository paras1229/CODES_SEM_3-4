/* 2)Write a program to perform multilevel inheritance.
   class:department(id,name) and employee(id,name)
   NOTE: void function and get value by user */
   
#include <iostream.h>
#include <conio.h>
class Department
{
	public:
    int did;
    char dnm[20];

    void getDepartment()
	{
        cout << "Enter Department ID: ";
        cin >> did;
        cout << "Enter Department Name: ";
        cin >> dnm;
    }

    void displayDepartment()
	{
        cout << "Department ID: " << did << endl;
        cout << "Department Name: " << dnm << endl;
    }
};
class Employee : public Department
{
	public:
    int eid;
    char enm[20];

    void getEmployee()
	{
        getDepartment();
        cout << "Enter Employee ID: ";
        cin >> eid;
        cout << "Enter Employee Name: ";
        cin >> enm;
    }

    void displayEmployee()
	{
        displayDepartment();
        cout << "Employee ID: " << eid << endl;
        cout << "Employee Name: " << enm << endl;
    }
};
void main()
{
    clrscr();
    Employee emp;
    emp.getEmployee();
    cout << "\nEmployee Details:" << endl;
    emp.displayEmployee();
    getch();
}