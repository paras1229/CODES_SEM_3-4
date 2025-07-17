#include<iostream.h>
#include<conio.h>
void fun()
{
    class Test 
	{
		int a,b;
		public:
		void show()
		{
			cout<<"enter value of a=:";
			cin>>a;
			cout<<"enter value of b=:";
			cin>>b;
			cout<<a<<endl<<b<<endl;
		}
	};
	Test t;
	t.show();
}
void main()
{
	Clrscr();
	Fun();
	Getch();
}