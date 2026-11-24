#include<iostream>
using namespace std;

class Calculator
{
	public:
	int add(int a,int b)
	{
	return a+b;
	}

	int add(int a, int b, int c)
	{
	return a+b+c;
	}
};

int main()
{
Calculator c;
cout<<"Addition of 2 numbers:"<<c.add(10,20)<<endl;
cout<<"Addition of 3 numbers:"<<c.add(12,13,14)<<endl;
return 0;
}
