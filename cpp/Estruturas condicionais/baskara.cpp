#include <iostream>
#include <cmath>
using namespace std; 
int main() {
    double A, B, C, delta, x1, x2;

    cout << "Qual o valor de A" << endl;
    cin >> A;

    cout << "Qual o valor de B" << endl;
    cin >> B;

    cout << "Qual o valor de C" << endl;
    cin >> C;

    delta = (B * B) - 4 * A * C;
    
    if (delta < 0 || A == 0) {
       cout << "Esta equacao nao possui raizes reais" << endl;
    }
    
    else {
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2= (-B - sqrt(delta)) / (2 * A);
        cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;
        }

    


    return 0;
}