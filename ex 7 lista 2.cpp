#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;

    cout << "Digite o primeiro lado: ";
    cin >> lado1;

    cout << "Digite o segundo lado: ";
    cin >> lado2;

    cout << "Digite o terceiro lado: ";
    cin >> lado3;

    if ((lado1 + lado2 > lado3) &&
        (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1)) {
        
        cout << "Os valores formam um triangulo." << endl;

        if (lado1 == lado2 && lado2 == lado3) {
            cout << "Tipo: Equilatero (todos os lados iguais)." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Tipo: Isosceles (dois lados iguais)." << endl;
        } else {
            cout << "Tipo: Escaleno (todos os lados diferentes)." << endl;
        }
    } else {
        cout << "Os valores nao formam um triangulo." << endl;
    }

    return 0;
}
