#include <iostream>
using namespace std;

int main() {

    int minutos;
    double valor = 50.00;

    cout << "Digite a quantidade de minutos consumidos: ";
    cin >> minutos;

    if (minutos > 100) {
        valor += (minutos - 100) * 2.00;
    }

    cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}