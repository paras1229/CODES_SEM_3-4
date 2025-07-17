#include<iostream.h>
class A 
{
   public:
   class B 
	{
      private:
      int num;
      public:
      void getdata(int n) 
		{
        	num = n;
      	}
      void putdata() 
		{
        	 cout<<"The number is"<<num;
		}
   };
};
void main() 
{
	cout<<"Nested classes in C++"<<endl;
   	A :: B obj;
   	obj.getdata(9);
   	obj.putdata();
}