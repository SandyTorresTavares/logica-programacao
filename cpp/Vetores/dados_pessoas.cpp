#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double alturas[N];
    char generos[N];

    double maiorAltura, menorAltura;
    double somaAlturaMulheres = 0;
    int qtdMulheres = 0;
    int qtdHomens = 0;

    for (int i = 0; i < N; i++) {
        cout << "Altura da " << i + 1 << "a pessoa: ";
        cin >> alturas[i];

        cout << "Genero da " << i + 1 << "a pessoa (M/F): ";
        cin >> generos[i];

        if (i == 0) {
            maiorAltura = alturas[i];
            menorAltura = alturas[i];
        } else {
            if (alturas[i] > maiorAltura) {
                maiorAltura = alturas[i];
            }

            if (alturas[i] < menorAltura) {
                menorAltura = alturas[i];
            }
        }

        if (generos[i] == 'F' || generos[i] == 'f') {
            somaAlturaMulheres += alturas[i];
            qtdMulheres++;
        } else if (generos[i] == 'M' || generos[i] == 'm') {
            qtdHomens++;
        }
    }

    cout << fixed << setprecision(2);

    cout << "\nMENOR ALTURA = " << menorAltura << endl;
    cout << "MAIOR ALTURA = " << maiorAltura << endl;

    if (qtdMulheres > 0) {
        cout << "MEDIA DAS ALTURAS DAS MULHERES = "
             << somaAlturaMulheres / qtdMulheres << endl;
    } else {
        cout << "NAO HA MULHERES NO GRUPO" << endl;
    }

    cout << "NUMERO DE HOMENS = " << qtdHomens << endl;

    return 0;
}