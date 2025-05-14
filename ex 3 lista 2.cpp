#include <iostream>
using namespace std;

int main ()
{
	int valor1, valor2, valor3;
	
	cout << "digite o primeiro valor: " ;
	cin >> valor1;
	
	
	cout << "digite o segundo valor: " ;
	cin >> valor2;
	
	
	cout << "digite o terceiro valor: " ;
	cin >> valor3;
	
	
	int maior = valor1;
	if (valor2 > maior) {
		maior = valor2;
	}
	if (valor3 > maior) {
		maior = valor3;
	}
	
	cout << "maior valor(es): " ;
	if (valor1 == maior) {
		cout << valor1 << " ";
	}
	if (valor2 == maior && valor2 != valor1) {
		cout << valor2 << " ";
	}
	if (valor3 == maior && valor3 != valor1 && valor3 != valor2) {
		cout << valor3 << " ";
	}
	
	cout << endl;
	return 0;
}