#include <iostream>
using namespace std;

int main() {

    int A, B, C, menor;

    cout << "Digite o primeiro numero: ";
    cin >> A;

    cout << "Digite o segundo numero: ";
    cin >> B;

    cout << "Digite o terceiro numero: ";
    cin >> C;

    menor = A;

    if (B < menor) {
        menor = B;
    }

    if (C < menor) {
        menor = C;
    }

    cout << "MENOR = " << menor << endl;

    return 0;
}