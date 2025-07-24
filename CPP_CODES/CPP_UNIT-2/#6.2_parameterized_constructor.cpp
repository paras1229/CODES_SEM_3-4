#include<iostream.h>
#include<conio.h>
class point
{
     private:
     int x,y;

     public:
        point( int x1, int y1 )
        {
              x = x1;
              y = y1;
              cout << "x is x1";
              cout << "y is y1";
        }
};
void main()
{
  clrscr();
  point  p1(10,15)
  getch();
}
