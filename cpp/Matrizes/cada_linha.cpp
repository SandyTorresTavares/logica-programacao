#include <iostream>
using namespace std;

int main() {

    int N;
    int matriz[10][10];

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;

    for (int i = 0; i < N; i++) {

        int maior = matriz[i][0];

        for (int j = 1; j < N; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }

        cout << maior << endl;
    }

    return 0;
}