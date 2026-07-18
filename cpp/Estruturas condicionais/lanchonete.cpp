#include <iostream>
using namespace std;

int main() {

    int codigo, quantidade;
    double valor;

    cout << "Digite o codigo do produto: ";
    cin >> codigo;

    cout << "Digite a quantidade: ";
    cin >> quantidade;

    switch (codigo) {

        case 1:
            valor = quantidade * 5.00;
            break;

        case 2:
            valor = quantidade * 3.50;
            break;

        case 3:
            valor = quantidade * 4.80;
            break;

        case 4:
            valor = quantidade * 8.90;
            break;

        case 5:
            valor = quantidade * 7.32;
            break;

        default:
            cout << "Codigo invalido!" << endl;
            return 0;
    }

    cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}