#include <stdio.h>  
#include <string.h>

int main() {
    int idade;
    double altura, salario;
    char genero;
    char nome[50];

    idade = 25;
    salario = 5000.50;  
    altura = 1.75;
    genero = 'M';
    strcpy(nome, "Jeferson");

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Salario: %.2f\n", salario);
    printf("Genero: %c\n", genero);
    
}