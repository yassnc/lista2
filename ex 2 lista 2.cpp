#include <iostream>
using namespace std;

int main ()
{
	int valor1, valor2;
	
	
	cout << "digite o primeiro valor:  " ;
	cin >> valor1; 
 
    
    cout << "digite o segundo valor: " ;
    cin >> valor2;
    
    if (valor1 > valor2) {
		cout << "o maior valor es " << valor1 << endl;
		
	}
    else if (valor2 > valor1) {
		cout << "o maior valor es " << valor2 << endl;
	} else {
		cout << "os dois numeros sao identicos. " << endl;
	}
	return 0;
}