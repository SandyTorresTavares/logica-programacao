#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;

    cout << "Quantas mercadorias serao digitadas? ";
    cin >> N;

    string nomes[N];
    double precoCompra[N], precoVenda[N];

    int lucroMenor10 = 0;
    int lucroEntre10e20 = 0;
    int lucroMaior20 = 0;

    double totalCompra = 0;
    double totalVenda = 0;

    for (int i = 0; i < N; i++) {
        cout << "\nDados da " << i + 1 << "a mercadoria:" << endl;

        cout << "Nome: ";
        cin >> nomes[i];

        cout << "Preco de compra: ";
        cin >> precoCompra[i];

        cout << "Preco de venda: ";
        cin >> precoVenda[i];

        double lucro = ((precoVenda[i] - precoCompra[i]) / precoCompra[i]) * 100;

        if (lucro < 10) {
            lucroMenor10++;
        } else if (lucro <= 20) {
            lucroEntre10e20++;
        } else {
            lucroMaior20++;
        }

        totalCompra += precoCompra[i];
        totalVenda += precoVenda[i];
    }

    double lucroTotal = totalVenda - totalCompra;

    cout << fixed << setprecision(2);

    cout << "\nRELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << lucroMenor10 << endl;
    cout << "Lucro entre 10% e 20%: " << lucroEntre10e20 << endl;
    cout << "Lucro acima de 20%: " << lucroMaior20 << endl;

    cout << "Valor total de compra: R$ " << totalCompra << endl;
    cout << "Valor total de venda: R$ " << totalVenda << endl;
    cout << "Lucro total: R$ " << lucroTotal << endl;

    return 0;
}