#include<iostream.h>
#include<conio.h>
class employee
{
	int id;
	char name[30];
	public:
		void getdata()
		{
			cout << "enter id: ";
			cin >> id;
			cout << "enter name: ";
			cin >> name;
		}
		void putdata()
		{
			cout << id << " ";
			cout << name << " ";
			cout << endl;
		}
};
void main()
{
	clrscr();
	employee  emp[30];
	int n, i;
	cout << "enter number of employee: ";
	cin >> n;
	
	for( i=0; i<n; i++ )
		emp[i].getdata();
		cout << "employee data: " << endl;
		
	for( i=0; i<n; i++ )
		emp[i].putdata();
}