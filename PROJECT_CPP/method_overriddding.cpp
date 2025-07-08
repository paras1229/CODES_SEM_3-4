#include<iostream.h>
#include<conio.h>
class base
{
	public:
	void print()
	{
		cout<<"base class";
	}
};
class derived
{
	public:
	void print()
	{
		cout<<"derived class";
	}
};
void main()
{
	derived d;
	d.print();
}