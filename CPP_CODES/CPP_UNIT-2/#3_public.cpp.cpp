#include<iostream.h>
#include<conio.h>
class base
{
	private:
	int u;

	protected:
	int v;

	public:
	int w;

		base()
		{
			u = 3;
			v = 4;
			w = 5;
		}
};
class derived : public base
{
	public:
		void show()
		{
			cout << "u is not accessible";
			cout << "\n value of v " << v;
			cout << \n value of w " << w;
		}
};
void main()
{
	derived  c;
	c.show();
}