#include <iostream>
using namespace std;

int main() {

    int qnt;
    double altura[100], idade[100], media = 0, menores = 0, porcentagem;
    string nome[100];

    cout << "Quantas pessoas serao digitadas?" << endl;
    cin >> qnt;

    for (int i = 0; i < qnt; i++) {
        cout << "Dados da "<< i+1 <<"a pessoa:" << endl;
        cout << "nome:" << endl;
        cin >> nome[i];
        cout << "idade:" << endl;
        cin >> idade[i];
        cout << "altura:" << endl;
        cin >> altura[i];

        media += altura[i] / qnt;
        

    }

    cout << "Altura media: " << media << endl;

    for (int i = 0; i < qnt; i++) {

        if (idade[i] < 16) {
            menores++;
        }

    }

    porcentagem = menores * 100 / qnt;

    cout << "Pessoas com menos de 16 anos: "<< porcentagem << "%" << endl;

    for (int i = 0; i < qnt; i++) {
        
         if(idade[i] < 16){
            
            cout << nome[i] << endl;
        }
    }


    return 0;
}