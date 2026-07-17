#include <stdio.h>

int main() {

    int n;
    int A[100], B[100], C[100];

    printf("Quantos valores terao os vetores? ");
    scanf("%d", &n);

    printf("\nDigite os valores do vetor A:\n");

    for (int i = 0; i < n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite os valores do vetor B:\n");

    for (int i = 0; i < n; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
    }

    printf("\nVETOR C:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}