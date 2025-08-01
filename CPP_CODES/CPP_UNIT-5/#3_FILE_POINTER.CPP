#include<iostream.h>
#include<fstream.h>
void main()
{
	ofstream  obj;
	obj.open("hello.txt", ios::out);

	cout << obj.tellp();
	obj << "hello world";
	obj << obj.tellp();

	obj.seekp(-5, ios::end);
	obj << "india";

	obj.close();
}