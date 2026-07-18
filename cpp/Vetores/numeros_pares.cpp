#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vetor[N];
    int qtdPares = 0;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    cout << "\nNUMEROS PARES:" << endl;

    for (int i = 0; i < N; i++) {
        if (vetor[i] % 2 == 0) {
            cout << vetor[i] << " ";
            qtdPares++;
        }
    }

    cout << endl;
    cout << "\nQUANTIDADE DE PARES = " << qtdPares << endl;

    return 0;
}