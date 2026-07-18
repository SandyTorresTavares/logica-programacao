#include <iostream>
using namespace std;

int main() {

    int N, matriz[100][100], negativos = 0;

    cout << "Qual a ordem da matriz?" << endl;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: " << endl;
            cin >> matriz[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL:" << endl;

    for (int i = 0; i < N; i++) {
        cout << matriz[i][i] << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] < 0) {
                negativos++;
            }
        }
    }

    cout << "QUANTIDADE DE NEGATIVOS = " << endl;
    cout << negativos << endl;

    return 0;
}