#include<iostream.h>
#include<conio.h>
union student
{
	int sno;
	char snm[10];
	char scity[20];
};
void main()
{
	union student s1;
	s1.sno=1;
	s1.snm='user';
	s1.scity='jetpur';
	cout<<s1.sno<<endl<<s1.snm<<endl<<s1.city<<endl;
}