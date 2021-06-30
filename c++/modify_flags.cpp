// modify flags
#include<iostream>
using namespace std;
int main(){
	cout.flags(ios::right | ios::hex | ios::showbase );
	cout.width (10);
	cout << 100 << '\n';
return 0;	
}