#include <iostream>
#include <cmath> // Para usar pow()
using namespace std;

int main() 
{
    float A, B, C;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Digite o valor de C: ";
    cin >> C;

    float hipotenusa, cateto1, cateto2;

    if (A > B && A > C) {
        hipotenusa = A;
        cateto1 = B;
        cateto2 = C;
    } else if (B > A && B > C) {
        hipotenusa = B;
        cateto1 = A;
        cateto2 = C;
    } else {
        hipotenusa = C;
        cateto1 = A;
        cateto2 = B;
    }

    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        if (pow(hipotenusa, 2) == pow(cateto1, 2) + pow(cateto2, 2)) {
            cout << "Os valores formam um triangulo retangulo." << endl;
        } else {
            cout << "Os valores formam um triangulo, mas nao es retangulo." << endl;
        }
    } else {
        cout << "Os valores nao formam um triangulo." << endl;
    }

    return 0;
}
