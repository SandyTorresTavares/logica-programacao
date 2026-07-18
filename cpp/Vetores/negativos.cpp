#include <iostream>
using namespace std;

int main() {

    int N;
    int numeros[10];

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }

    cout << "NUMEROS NEGATIVOS:" << endl;

    for (int i = 0; i < N; i++) {

        if (numeros[i] < 0) {
            cout << numeros[i] << endl;
        }

    }

    return 0;
}