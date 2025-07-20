#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int sno;
	char snm[10];
	student()  //constructor as same as class_name
	{
		cout << "enter student no :";
		cin >> sno;
		cout << "enter student name :";
		cin >> snm;
		cout << sno << endl << snm;
	}
};
void main()
{
	clrscr();
	student  s1;
}
	