#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int age;
	void fun()
	{
		cout <<"enter age:";
		cin >>age;
	}
};
class b
{
	public:
    char nm[20];
	void fun1()
	{
		cout <<"enter name:";
		cin >>nm;
	}
};
class c : public a, public b
{
	public:
	void show()
	{
		cout <<"age=" <<age<<endl;
		cout <<"nm=" <<nm;
	}
};
void main()
{
	clrscr();
	c  c1;
	c1.fun();
	c1.fun1();
	c1.show();
}
