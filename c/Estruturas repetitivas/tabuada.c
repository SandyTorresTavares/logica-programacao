#include <stdio.h>
int main() {
    int i, num, produto;

    printf("Escolha o numero para a tabuada:\n");
    scanf("%d", &num);

    for (i = 0; i <= 10; i++) {
        produto = num * i;
        printf("%d x %d = %d\n", num, i, produto);
    }
    return 0;
}