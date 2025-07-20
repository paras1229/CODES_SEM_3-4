#include<iostream.h>
#include<conio.h>
class a
{
	public:
	class b
	{
		private:
		int num;
		
		public:
			void getdata( int n )
			{
				num = n;
			}
			void putdata()
			{
				cout << "the number is " << n;
			}
	};
};
void main()
{
	clrscr();
	cout << "nested class in c++" << endl;
 	a :: b  obj;
	obj.getdata(9);
	obj.putdata();
}
