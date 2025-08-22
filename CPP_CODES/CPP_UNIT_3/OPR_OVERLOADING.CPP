#include<iostream.h>
#include<conio.h>
class temp
{
	private:
	int count;
	
	public:
	temp():count(10)
	{}
	
	void operator++()
	{
		count=count+1;
	}
	void display()
	{
		cout << "count:" << count;
	}
};
void main()
{
	clrscr();
	temp t;
	++t;
	t.display();
	getch();
}