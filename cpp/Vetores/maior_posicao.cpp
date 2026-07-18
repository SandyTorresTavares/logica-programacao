#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vetor[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    double maior = vetor[0];
    int posicao = 0;

    for (int i = 1; i < N; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    cout << "\nMAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao << endl;

    return 0;
}