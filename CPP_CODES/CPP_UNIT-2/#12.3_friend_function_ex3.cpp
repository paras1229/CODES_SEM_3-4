#include<iostream.h>
#include<conio.h>
class base
{
	private:
	int a;

	protected:
	int b;

	public:
	base()
	{
		a = 10;
		b = 99;
	}
	friend void ffunction( base& obj);
};
void ffunction( base& obj )
{
	cout << "Private variable: " << obj.a << endl;
	cout << "Protected variable: " << obj.b;
}
void main()
{
	clrscr();
	base  obj1;
	ffunction( obj1 );
	getch();
}
