#include <iostream>
using namespace std;
int main() {
    int numero, resultado[100];

    cout << "Qual tabuada quer consultar?" << endl;
    cin >> numero;

    for (int i = 0; i < 10; i++) {
        resultado[i] = (i + 1) * numero;
        cout << (i+1) << " x " << numero << " = " << resultado[i] << "\n" ;
    }

    return 0;
}