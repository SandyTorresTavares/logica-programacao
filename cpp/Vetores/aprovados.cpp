#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    string nomes[N];
    double nota1[N], nota2[N];

    for (int i = 0; i < N; i++) {
        cout << "Dados do " << i + 1 << "o aluno:" << endl;

        cout << "Nome: ";
        cin >> nomes[i];

        cout << "Nota do primeiro semestre: ";
        cin >> nota1[i];

        cout << "Nota do segundo semestre: ";
        cin >> nota2[i];
    }

    cout << "\nALUNOS APROVADOS:" << endl;

    for (int i = 0; i < N; i++) {
        double media = (nota1[i] + nota2[i]) / 2.0;

        if (media >= 6.0) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}