#include <iostream>
using namespace std;

int main() {

    int N;
    double numeros[100], soma = 0, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    // Leitura dos números
    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> numeros[i];

        soma += numeros[i];
    }

    media = soma / N;

    // Impressão do vetor
    cout << "VALORES = ";
    for (int i = 0; i < N; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Soma e média
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}