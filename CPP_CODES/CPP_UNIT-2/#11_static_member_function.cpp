#include<iostream.h>
#include<conio.h>
class box
{
     private:
     static int length;
     static int breadth;
     static int height;

     public:
        static void print()
        {
            cout << "the value of the length is  " << length << endl;
            cout << "the value of the breadth is  " << breadth << endl;
            cout << "the value of the height is  " << height << endl;
        }
};
int box :: length = 10;
int box :: breadth = 20;
int box :: height = 30;
void main()
{
  clrscr();
  box  b;
  box :: print();
  getch();
}
