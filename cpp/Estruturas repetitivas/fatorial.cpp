#include <iostream>
using namespace std;

int main() {

    int N;
    long long fatorial = 1;

    cout << "Digite um valor: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    cout << "FATORIAL = " << fatorial << endl;

    return 0;
}