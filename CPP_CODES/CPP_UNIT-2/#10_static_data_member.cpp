#include<iostream.h>
#include<conio.h>
class A
{
     public:
     static int x;
        A()
        {
            cout << "A's constructor calling";
        }
};
int A :: x=2;
void main()
{
  clrscr();
  A  a1;
  cout << "Accessing a data member" << A :: x;
  getch();
}
