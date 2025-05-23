#include <iostream>
using namespace std;

int main() 
{
    float P1, P2, media;

    cout << "Digite a nota da P1: ";
    cin >> P1;

    cout << "Digite a nota da P2: ";
    cin >> P2;

    media = (P1 + 2 * P2) / 3;

    cout << "Media final: " << media << endl;

    if (media >= 5) {
        cout << "Situacao: Aprovado" << endl;
    } else {
        cout << "Situacao: Reprovado" << endl;
    }

    return 0;
}
