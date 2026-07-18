#include <iostream>
using namespace std;

int main() {

    int idade, quantidade = 0;
    double soma = 0, media;

    cout << "Digite as idades:" << endl;
    cin >> idade;

    while (idade >= 0) {

        soma += idade;
        quantidade++;

        cin >> idade;
    }

    if (quantidade == 0) {
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else {
        media = soma / quantidade;
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}