#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double soma = 0, media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    double vetor[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
        soma += vetor[i];
    }

    media = soma / N;

    cout << fixed << setprecision(3);
    cout << "\nMEDIA DO VETOR = " << media << endl;

    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;

    cout << fixed << setprecision(1);
    for (int i = 0; i < N; i++) {
        if (vetor[i] < media) {
            cout << vetor[i] << endl;
        }
    }

    return 0;
}