#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int N;
    double matriz[10][10];

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    // Leitura da matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // a) Soma dos elementos positivos
    double somaPositivos = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > 0) {
                somaPositivos += matriz[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << "\nSOMA DOS POSITIVOS = " << somaPositivos << endl;


    // b) Imprimir uma linha da matriz
    int linha;

    cout << "\nQual linha deseja mostrar? ";
    cin >> linha;

    cout << "LINHA " << linha << ":" << endl;

    for (int j = 0; j < N; j++) {
        cout << matriz[linha][j] << endl;
    }


    // c) Imprimir uma coluna da matriz
    int coluna;

    cout << "\nQual coluna deseja mostrar? ";
    cin >> coluna;

    cout << "COLUNA " << coluna << ":" << endl;

    for (int i = 0; i < N; i++) {
        cout << matriz[i][coluna] << endl;
    }


    // d) Diagonal principal
    cout << "\nDIAGONAL PRINCIPAL:" << endl;

    for (int i = 0; i < N; i++) {
        cout << matriz[i][i] << endl;
    }


    // e) Elevar números negativos ao quadrado
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (matriz[i][j] < 0) {
                matriz[i][j] = matriz[i][j] * matriz[i][j];
            }

        }
    }


    cout << "\nMATRIZ ALTERADA:" << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}