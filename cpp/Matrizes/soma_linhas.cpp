#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int M, N;

    cout << "Quantas linhas vai ter a matriz? ";
    cin >> M;

    cout << "Quantas colunas vai ter a matriz? ";
    cin >> N;

    double matriz[10][10];
    double somaLinhas[10];

    for (int i = 0; i < M; i++) {
        somaLinhas[i] = 0;
    }

    cout << "Digite os elementos da matriz:" << endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
            somaLinhas[i] += matriz[i][j];
        }
    }

    cout << fixed << setprecision(1);
    cout << "VETOR GERADO:" << endl;

    for (int i = 0; i < M; i++) {
        cout << somaLinhas[i] << endl;
    }

    return 0;
}