#include<iostream.h>
#include<conio.h>
struct std
{
	int rno;
	char snm[20];
};
void main()
{
	clrscr();
	struct std s1;
	s1.rno=101;
	s1.snm='prince';
	cout<<s1.rno<<endl<<s1.snm<<endl;
	getch();
}