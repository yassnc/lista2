#include <iostream>
using namespace std;

int main ()
{
	int base, altura, area;
	
	cout << "informe a base do retangulo: " ;
	cin >> base;
	
	cout << "informe a altura do retangulo: " ;
	cin >> altura;
	
	area = base * altura;
	
	if (area > 100) {
		cout << "terreno grande." << endl;
	} else { 
		cout << "terreno pequeno." << endl;
	}
	return 0;
}