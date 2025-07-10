#include<iostream.h>
#include<conio.h>
union student
{
	int sno;
	char snm[20];
	char scity[50];
};
void main()
{
	union student s1;
	s1.sno=1;
	s1.snm='prince';
	s1.scity='dhoraji';
	cout<<s1.sno<<endl<<s1.snm<<endl<<s1.city<<endl;
}