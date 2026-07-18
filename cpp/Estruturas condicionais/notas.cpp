#include <iostream>
using namespace std; 
int main() {

double nota1, nota2, notaFinal;

cout << "Digite a primeira nota:" << endl;
cin >> nota1;

cout << "Digite a segunda nota:" << endl;
cin >> nota2;

    notaFinal = (nota1 + nota2) / 2;


if (notaFinal < 5) { 
   cout << "Reprovado com nota " << notaFinal;
}

else if (notaFinal < 7 ) {
    cout << "Voce esta de recuperacao com nota " << notaFinal;
}

else {
    cout << "Aprovado com nota " << notaFinal;
}


    return 0;
}