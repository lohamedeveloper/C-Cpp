#include<iostream>

using namespace std;

class Addition
{
public:
	void sum(int a, int b)
	{
		cout<<a+b;
	}
	void sum(float a, float b)
	{
		cout<<a+b;
	}
};

int  main()
{
	Addition obj;
	obj.sum(10, 20);
	cout<<endl;
	obj.sum(10, 20.9);
}