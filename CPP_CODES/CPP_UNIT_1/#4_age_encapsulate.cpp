#include<iostream.h>
#include<conio.h>
class encap
{
	int age;
	public:
	void set( int a )
	{
		age=a;	cout<<a;
	}
};
void main()
{
	encap e;
	e.set(20);
}