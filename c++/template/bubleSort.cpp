// CPP código para classificação por bolha
// usando a função de modelo
#include <iostream> 
using namespace std; 

// Uma função de modelo para implementar a classificação por bolha.
// Podemos usar isso para qualquer tipo de dados que suporte
template <class T> 
void bubbleSort(T array[], int n) { 
	for (int i = 0; i < n - 1; i++) 
		for (int j = n - 1; i < j; j--) 
			if (array[j] < array[j - 1]) 
			swap(array[j], array[j - 1]); 
}

template <typename T>
void print(T array[], int n){
	cout << "Array ordenada: "; 
	for (int i = 0; i < n; i++) 
		cout << array[i] << " "; 
	cout << endl << endl;
}

int main() { 
	
	int array1[5] = {10, 50, 30, 40, 20}; 
	char array2[5] = {'o', 'a', 'i', 'u', 'e'};

	int n1 = sizeof(array1) / sizeof(array1[0]); 
	int n2 = sizeof(array2) / sizeof(array2[0]);

	// chmada template função 
	bubbleSort<int>(array1, 5);
	bubbleSort<char>(array2, 5); 

	//print arrays
	 print(array1, n1);
	 print(array2, n2);

return 0; 
} 
