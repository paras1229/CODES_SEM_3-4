#include<iostream.h>
#include<conio.h>
class student
{
     int rno;
     char name[20];
     double fee;
     public:
        student()
        {
              cout << "enter roll no: ";
              cin >> rno;
              cout << "enter student name: ";
              cin >> name;
              cout << "enter fee: ";
              cin >> fee;
              cout << rno << endl << name << endl << fee;
        }
};
void main()
{
  clrscr();
  student  s;
  getch();
}
