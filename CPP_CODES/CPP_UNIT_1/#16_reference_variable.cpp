#include<iostream.h>
#include<conio.h>
void main()
{
  int a=50;
  int &b=a;
  cout<<a<<b;
  a++;
  cout<<a<<b;
}
