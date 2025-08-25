/* write a program to create a bca class
and its data member like rollno,age,grade
to perform data before overloading and print
the data after overloading. */
#include<iostream.h>
#include<conio.h>
class bca
{
	public:
	int rollno;
	float age;
	char grade;
	bca(int rno, int ag, int gda)
	{
		rollno=rno;
		age=ag;
		grade=gda;
	}
	void operat()
	{
		rollno=rollno+1;
		age=age+1;
		grade=grade+1;
	}
};
void main()
{
	clrscr();
	bca ob(20, 33,'A');
	cout <<"before overloading the values are=\n";
	cout <<ob.rollno<<endl<<ob.age<<endl<<ob.grade;
	
	ob.operat();
	cout <<"after overloading the values of=\n";
	cout <<ob.rollno<<endl<<ob.age<<endl<<ob.grade;
	getch();
}