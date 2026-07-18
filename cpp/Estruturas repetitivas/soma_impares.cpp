#include <iostream>
using namespace std;

int main() {

    int X, Y, inicio, fim;
    int soma = 0;

    cout << "Digite dois valores: ";
    cin >> X >> Y;

    if (X < Y) {
        inicio = X;
        fim = Y;
    }
    else {
        inicio = Y;
        fim = X;
    }

    for (int i = inicio + 1; i < fim; i++) {

        if (i % 2 != 0) {
            soma += i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}