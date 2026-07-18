#include <iostream>
using namespace std;

int main() {

    int codigo;
    int alcool = 0, gasolina = 0, diesel = 0;

    cout << "Informe um codigo (1 para alcool, 2 para gasolina, 3 para diesel ou 4 para parar:)";
    cin >> codigo;

    while (codigo != 4) {

        if (codigo == 1) {
            alcool++;
        }
        else if (codigo == 2) {
            gasolina++;
        }
        else if (codigo == 3) {
            diesel++;
        }
        else {
            cout << "Codigo invalido!" << endl;
        }

        cout << "Digite o codigo do combustivel: ";
        cin >> codigo;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}