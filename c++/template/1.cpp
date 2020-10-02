#include<iostream>
#include<string>

using namespace std;

//Suporta todo tipo de dado primitivo da linguagem C++
template <typename T>
T  Maximo(T x, T y){
	return (x > y) ? x:y ;
}

int main(){

	//chamada da função informando seu tipo de dados 
	cout << Maximo<string>("Hello Word!", "Olá mmundo!") << endl;
	cout << Maximo<int>(3,7) << endl;
	cout << Maximo<int>(3,3) << endl;
	cout << Maximo<char>('g', 'e') << endl;
	cout << Maximo<double>(3.0, 7.0)<< endl;
	cout << Maximo<bool>(false, true) << endl;
	

	return 0;
}
/*Output:
	Olá mmundo!
	7
	3
	g
	7
	1
*/