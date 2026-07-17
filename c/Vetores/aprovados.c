#include <stdio.h>

int main() {

    int n;
    char nomes[100][50];
    double nota1[100], nota2[100];
    double media;

    printf("Quantos alunos voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("\nDados do %do aluno:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Nota do 1o semestre: ");
        scanf("%lf", &nota1[i]);

        printf("Nota do 2o semestre: ");
        scanf("%lf", &nota2[i]);
    }

    printf("\nALUNOS APROVADOS:\n");

    for (int i = 0; i < n; i++) {

        media = (nota1[i] + nota2[i]) / 2.0;

        if (media >= 6.0) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}