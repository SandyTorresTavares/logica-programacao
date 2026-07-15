#include <stdio.h>
#include <ctype.h>

int main() {
    double celsius, fahrenheit, kelvin;
    char escalaInicial, escalaFinal;

    printf("Voce vai digitar a temperatura em qual escala, Kelvin (K), Fahrenheit (F) ou Celsius (C)? ");
    scanf(" %c", &escalaInicial);

    printf("Voce quer converter para qual escala, Kelvin (K), Fahrenheit (F) ou Celsius (C)? ");
    scanf(" %c", &escalaFinal);

    escalaInicial = toupper(escalaInicial);
    escalaFinal = toupper(escalaFinal);

    if (escalaInicial == 'C') {

        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &celsius);

        if (escalaFinal == 'F') {
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("A temperatura em Fahrenheit e: %.2lf\n", fahrenheit);
        }
        else if (escalaFinal == 'K') {
            kelvin = celsius + 273.15;
            printf("A temperatura em Kelvin e: %.2lf\n", kelvin);
        }
        else if (escalaFinal == 'C') {
            printf("A temperatura continua sendo: %.2lf °C\n", celsius);
        }
        else {
            printf("Escala final invalida.\n");
        }
    }

    else if (escalaInicial == 'F') {

        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &fahrenheit);

        if (escalaFinal == 'C') {
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("A temperatura em Celsius e: %.2lf\n", celsius);
        }
        else if (escalaFinal == 'K') {
            kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
            printf("A temperatura em Kelvin e: %.2lf\n", kelvin);
        }
        else if (escalaFinal == 'F') {
            printf("A temperatura continua sendo: %.2lf °F\n", fahrenheit);
        }
        else {
            printf("Escala final invalida.\n");
        }
    }

    else if (escalaInicial == 'K') {

        printf("Digite a temperatura em Kelvin: ");
        scanf("%lf", &kelvin);

        if (escalaFinal == 'C') {
            celsius = kelvin - 273.15;
            printf("A temperatura em Celsius e: %.2lf\n", celsius);
        }
        else if (escalaFinal == 'F') {
            fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
            printf("A temperatura em Fahrenheit e: %.2lf\n", fahrenheit);
        }
        else if (escalaFinal == 'K') {
            printf("A temperatura continua sendo: %.2lf K\n", kelvin);
        }
        else {
            printf("Escala final invalida.\n");
        }
    }

    else {
        printf("Escala inicial invalida.\n");
    }

    return 0;
}