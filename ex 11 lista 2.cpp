#include <iostream>
using namespace std;

int main() 
{
    float P1, P2_necessaria;

    // Entrada da nota da P1
    cout << "Digite a nota da P1: ";
    cin >> P1;

    // Calculo da nota necessaria na P2
    P2_necessaria = (5 * 3 - P1) / 2;

    // Exibe o resultado
    cout << "Para ser aprovado com media 5, voce precisa tirar " << P2_necessaria << " na P2." << endl;

    // Verificacoes adicionais
    if (P2_necessaria > 10) {
        cout << "Mesmo com nota maxima na P2, nao e possivel atingir a media 5. Voce esta reprovado." << endl;
    } else if (P2_necessar_
