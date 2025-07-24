#include<iostream.h>
#include<conio.h>
class geeks
{
     int *ptr;
     public:
        geeks()
        {
            ptr = new int[10];
            *ptr = 10;
            cout << "pointer is  " << *ptr;
        }
};
void main()
{
  clrscr();
  geeks  g1;
  getch();
}
