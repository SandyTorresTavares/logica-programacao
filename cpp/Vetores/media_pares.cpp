#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    int vetor[N];
    int soma = 0, qtdPares = 0;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];

        if (vetor[i] % 2 == 0) {
            soma += vetor[i];
            qtdPares++;
        }
    }

    if (qtdPares == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    } else {
        double media = (double)soma / qtdPares;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media << endl;
    }

    return 0;
}