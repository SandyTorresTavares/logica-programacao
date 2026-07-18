#include <iostream>
using namespace std;

int main() {

    double nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    while (nota1 < 0 || nota1 > 10) {
        cout << "VALOR INVALIDO! Digite novamente: ";
        cin >> nota1;
    }

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    while (nota2 < 0 || nota2 > 10) {
        cout << "VALOR INVALIDO! Digite novamente: ";
        cin >> nota2;
    }

    media = (nota1 + nota2) / 2.0;

    cout << "MEDIA = " << media << endl;

    return 0;
}