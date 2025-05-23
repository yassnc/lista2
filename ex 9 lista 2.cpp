#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    float peso, altura, R;
    int sexo;

    cout << "Digite o peso (kg): ";
    cin >> peso;

    cout << "Digite a altura (m): ";
    cin >> altura;

    cout << "Digite o sexo (1 para feminino, 2 para masculino): ";
    cin >> sexo;

    R = peso / pow(altura, 2);

    if (sexo == 1) { 
        if (R < 19) {
            cout << "Abaixo do peso ideal (feminino)." << endl;
        } else if (R < 24) {
            cout << "Peso ideal (feminino)." << endl;
        } else {
            cout << "Acima do peso (feminino)." << endl;
        }
    } else if (sexo == 2) { 
        if (R < 20) {
            cout << "Abaixo do peso ideal (masculino)." << endl;
        } else if (R < 25) {
            cout << "Peso ideal (masculino)." << endl;
        } else {
            cout << "Acima do peso (masculino)." << endl;
        }
    } else {
        cout << "Codigo de sexo invalido. Use 1 para feminino ou 2 para masculino." << endl;
    }

    return 0;
}
