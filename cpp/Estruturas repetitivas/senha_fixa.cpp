#include <iostream>
using namespace std;

int main() {
    int senha, senhaCorreta = 2002;

    cout << "Digite sua senha" << endl;
    cin >> senha;

    while(senha != senhaCorreta) {
        cout << "Senha incorreta! Tente novamente:" << endl;
        cin >> senha;
    }

    cout << "Senha correta. Liberado!" << endl;

    return 0;
}