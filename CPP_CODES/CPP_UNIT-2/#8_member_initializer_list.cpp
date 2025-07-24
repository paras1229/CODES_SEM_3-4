#include<iostream.h>
#include<conio.h>
class point
{
     int x,y;
     public:
        point(int i=0, int j=0): x(i), y(j)
        {
            cout << "the value of x:" << x << endl;
            cout << "the value of y:" << y;
        }
};
void main()
{
  clrscr();
  point  p(10,15);
  getch();
}
