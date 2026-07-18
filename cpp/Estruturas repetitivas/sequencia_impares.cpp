#include <iostream>
using namespace std;

int main() {

    int X;

    cout << "Digite um valor: ";
    cin >> X;

    for (int i = 1; i <= X; i++) {

        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}