#include <iostream>
using namespace std;

int main() {

    int M, N;
    int matriz[10][10];

    cout << "Quantas linhas vai ter a matriz? ";
    cin >> M;

    cout << "Quantas colunas vai ter a matriz? ";
    cin >> N;

    cout << "Digite os elementos da matriz:" << endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "NUMEROS NEGATIVOS:" << endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] < 0) {
                cout << matriz[i][j] << endl;
            }
        }
    }

    return 0;
}