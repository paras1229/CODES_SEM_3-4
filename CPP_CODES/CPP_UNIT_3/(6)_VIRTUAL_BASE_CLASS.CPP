// if "member is ambigious A :: a & A :: a" error found then remove "/**/" at line 13,16
#include<iostream.h>
#include<conio.h>
class a
{
		public:
		int a;
		a()
		{
			a=10;
		}
};
class b : public /* virtual */ a
{
};
class c : public /* virtual */ a
{
};
class d : public b, public c
{
};
void main()
{
	clrscr();
	d  obj;
	cout << "a= " << obj.a << endl;
	getch();
}