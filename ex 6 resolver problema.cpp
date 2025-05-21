#include <iostream>
using namespace std;

int main ()
{
	int peso, altura, relacao;
	
	cout << "informe o seu peso: " ;
	cin >> peso;
	
	cout << "informe a sua altura: " ;
	cin >> altura; 
	
	relacao = peso / (altura * altura);
	
	if (relacao < 20) {
		cout << "abaixo do peso. " << endl;
	} else if (relacao >= 20 && relacao < 25) {
		cout << "peso ideal. " << endl;
	} else if (relacao >= 25){
		cout << "acima do peso. " << endl;
	}
	return 0;
}