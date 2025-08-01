#include<iostream.h>
#include<fstream.h>
void main()
{
	ofstream myfile;
	myfile.open("paras.txt");
	myfile << "this file created by c++";
	myfile.close();
}