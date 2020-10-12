#include<iostream>
#include<thread>

using namespace std;

void foo(){
	//do stuff...
}

void bar(int x){
	//do stuff...
}


int main(){

	std::thread first (foo);
	std::thread second (bar, 0);

	cout << "main, foo and bar now concurrently ...\n";

	first.join();
	second.join();

	cout << "foo and bar completed.\n";

	return 0;
}