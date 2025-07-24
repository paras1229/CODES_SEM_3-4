#include<iostream.h>
#include<conio.h>
class construct
{
     public:
     float area;
        construct()
        {
            area = 0;
        }
        construct(int a, int b)
        {
            area = a*b;
            cout << area << endl;
        }
};
void main()
{
  clrscr();
  construct  o;
  construct  o2(10,20);
  getch();
}
