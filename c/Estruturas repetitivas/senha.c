#include <stdio.h>

int main() {

    int senhaCorreta = 2002;
    int senha;

    printf("Digite sua senha:\n");
    scanf("%d", &senha);

    while (senha != senhaCorreta) {
        printf("Senha incorreta\n");
        printf("Digite sua senha:\n");
        scanf("%d", &senha);
    }

    printf("Acesso liberado\n");

    return 0;
}