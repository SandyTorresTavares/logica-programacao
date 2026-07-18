#include <iostream>
using namespace std;

int main() {

    int N, X;
    int dentro = 0, fora = 0;

    cout << "Digite a quantidade de valores: ";
    cin >> N;

    for (int i = 0; i < N; i++) {

        cout << "Digite um valor: ";
        cin >> X;

        if (X >= 10 && X <= 20) {
            dentro++;
        }
        else {
            fora++;
        }
    }

    cout << "Dentro: " << dentro << endl;
    cout << "Fora: " << fora << endl;

    return 0;
}