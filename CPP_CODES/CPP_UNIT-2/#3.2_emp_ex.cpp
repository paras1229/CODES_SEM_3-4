#include<iostream.h>
#include<conio.h>
class emp
{
	protected:
	int did;
	char dnm[10];
	
	public:
	int eid;
	char enm[10];
	double salary;
	
	void getdata()
	{
		cout << "enter eid :";
		cin >> eid;
		cout << "enter employee name :";
		cin >> enm;
		cout << "enter employee salary :";
		cin >> salary;
		cout << eid << endl << enm << endl << salary << endl << endl;
	}
	void show()
	{
		cout << eid;
		cout << enm;
		cout << salary;
	}
};
class department : public emp
{
	public:
		void get()
		{
			cout << "enter did :";
			cin >> did;
			cout << "enter department name :";
			cin >> dnm;
			count << did << endl << dnm << endl;
		}
};
void main()
{
	clrscr();
	department  d1;
	d1.getdata();
	d1.get();
	d1.show();
}