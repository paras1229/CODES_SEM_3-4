\\ class and object example c++
#include<iostream.h>
#include<conio.h>
class student
{
     int rollno;
     char sname[10];
     public:
        void get()
        {
            cout<<"enter student roll no=";
            cin>>rollno;
            cout<<"enter student name=";
            cin>>sname;
            cout<<rollno<<endl<<sname;
        }
};
void main()
{
     clrscr();
     student s1;
     s1.get();
}