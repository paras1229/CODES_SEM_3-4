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
	s1.snm='user';
	s1.scity='jetpur';
	cout<<sizeof(s1.sno);
	cout<<sizeof(s1.snm);
	cout<<sizeof(s1.scity);
	cout<<sizeof(student);
}