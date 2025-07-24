#include<iostream.h>
#include<conio.h>
class A
{
     int x
     public:
        A(int a)
        {
            x = a;
        }
        A(A&i)
        {
            x = i.x;
        }
};
void main()
{
  clrscr();
  A  a1(10);
  A  a2(a1);
  cout << a2.x;
  getch();
}
