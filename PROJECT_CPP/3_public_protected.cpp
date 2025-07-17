#include<iostream.h>
class baseclass
{
	private:
	int u;
	protected:
	int v;
	public:
	int w;
	baseclass()
	{	
		u = 3;
		v = 4;
		w = 5;
	}
};
class deriveclass: public baseclass
{
//v becomes protected and w becomes public members of class derive
	public:
	void show()
	{
		cout<<"u is not accessible";
		cout<<"\nvalue of v is"<<v;
		cout<<"]\nvalue of w is"<<w;
	}
};
Void main()
{
	deriveclass c;
	c.show();
}