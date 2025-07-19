#include<iostream.h>
#include<conio.h>
void fun()
{
	class test
	{
		int a, b;
		public:
			void show()
			{
				cout << "enter value of a :" << a;
				cin >> a;
				cout << "enter value of b :" << b;
				cin >> b;
				cout << a << endl << b;
			}
	};
	test  t;
	t.show();
}
void main()
{
	clrscr();
	fun();
	getch();
}