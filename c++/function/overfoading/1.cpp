#include<iostream>
using namespace std;

class Addition{
public:
	void sum(int a, int b)
	{
		cout << a+b << end;
	}
	void sum(int a , int b, int c){
		cout<< a+b+c << endl;
	}
};

int main()
{
	Addition obj;

	obj.sum(1,1);
	obj.sum(1,1,1);
}