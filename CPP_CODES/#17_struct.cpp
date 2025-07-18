#include<iostream.h>
#include<conio.h>
struct emp
{
   char enm;
   int eid;
   double salary;
};
void main()
{
   struct emp e;
   e.enm='user';
   e.eid=1;
   e.salary=30000;
   cout<<e.enm<<endl<<e.eid<<endl<<e.salary;
}
