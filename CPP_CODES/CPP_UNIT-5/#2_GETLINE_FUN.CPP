#include<iostream.h>
#include<fstream.h>
void main()
{
	char nm[20];
	cout << "enter any string:";
	cin.getline(nm,10);
	cout.write(nm,2);
}