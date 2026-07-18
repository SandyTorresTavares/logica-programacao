#include <iostream>
using namespace std;

int main() {

    double preco, dinheiro, total, troco;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    total = preco * quantidade;

    if (dinheiro >= total) {
        troco = dinheiro - total;
        cout << "TROCO = R$ " << troco << endl;
    }
    else {
        cout << "DINHEIRO INSUFICIENTE. FALTAM R$ "
             << total - dinheiro << endl;
    }

    return 0;
}