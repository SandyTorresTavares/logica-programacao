#include <iostream>
using namespace std;

int main() {

    char escalaInicial, escalaFinal;
    double temperatura, resultado;

    cout << "Digite a escala inicial (C/F/K): ";
    cin >> escalaInicial;

    cout << "Digite a escala final (C/F/K): ";
    cin >> escalaFinal;

    cout << "Digite a temperatura: ";
    cin >> temperatura;

    if (escalaInicial == escalaFinal) {
        resultado = temperatura;
    }

    else if ((escalaInicial == 'C' || escalaInicial == 'c') &&
             (escalaFinal == 'F' || escalaFinal == 'f')) {

        resultado = (temperatura * 9.0 / 5.0) + 32.0;
    }

    else if ((escalaInicial == 'C' || escalaInicial == 'c') &&
             (escalaFinal == 'K' || escalaFinal == 'k')) {

        resultado = temperatura + 273.15;
    }

    else if ((escalaInicial == 'F' || escalaInicial == 'f') &&
             (escalaFinal == 'C' || escalaFinal == 'c')) {

        resultado = (temperatura - 32.0) * 5.0 / 9.0;
    }

    else if ((escalaInicial == 'F' || escalaInicial == 'f') &&
             (escalaFinal == 'K' || escalaFinal == 'k')) {

        resultado = (temperatura - 32.0) * 5.0 / 9.0 + 273.15;
    }

    else if ((escalaInicial == 'K' || escalaInicial == 'k') &&
             (escalaFinal == 'C' || escalaFinal == 'c')) {

        resultado = temperatura - 273.15;
    }

    else if ((escalaInicial == 'K' || escalaInicial == 'k') &&
             (escalaFinal == 'F' || escalaFinal == 'f')) {

        resultado = (temperatura - 273.15) * 9.0 / 5.0 + 32.0;
    }

    else {
        cout << "Escalas invalidas!" << endl;
        return 0;
    }

    cout << "Temperatura convertida: " << resultado << " "
         << escalaFinal << endl;

    return 0;
}