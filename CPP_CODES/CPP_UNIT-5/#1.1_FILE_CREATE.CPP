#include<iostream.h>
#include<fstream.h>
void main()
{
	ofstream myfile;
	myfile.open("paras.txt"); //new txt file
	cout << "file create successfully!";
	myfile.close();
}