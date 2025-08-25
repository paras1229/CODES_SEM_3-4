#include<iostream.h>
#include<conio.h>
class person
{
	public:
	int rollno;
	int age;
	void getdata()
	{
		cout <<"enter rollno:";
		cin >> rollno;
		cout <<"enter age:";
		cin >> age;
	}
};
class student : public person
{
	public:
	void show()
	{
		cout <<"rollno is=" << rollno << endl;
		cout <<"age is=" << age << endl;
	}
};
void main()
{
	clrscr();
	student s1;
	s1.getdata();
	s1.show();
	getch();
}