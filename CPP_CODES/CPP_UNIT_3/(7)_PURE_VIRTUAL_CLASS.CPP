#include<iosteam.h>
#include<conio.h>
class student 
{
	public:
	int rollno;
	char nm[20];
	void get()
	{
			cout << "enter roll no: ";
			cin >> rollno;
			cout << "enter name: ";
			cin >> nm;
			cout <<  rollno << nm;
	}
};
class test : virtual public student
{
	public;
	int t1 , t2;
	void data()
	{
		cout << "enter mark of t1= ";
		cin >> t1;
		cout << "enter mark of t2= ";
		cin >> t2;
		cout << t1 << endl << t2;
	}
};
class score : virtual public student
{
	public:
	int score;
	void mark()
	{
		cout << "enter score: ";
		cin >> score;
	}
class total : public test, public score
{
	public:
	int total;
	void res()
	{
		total = 0;
		total = t1+t2+score;
		cout << total;
	}
};
void main()
{
	clrscr();
	total  t1;
	t1.get();
	t1.data();
	t1.mark();
	t1.res();
	getch();
}