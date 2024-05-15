#include<stdio.h>
#include<conio.h>

int main() {
    float A, B, C;
    printf("Entre com os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A < B + C && B < A + C && C < A + B) {
        if (A == B && B == C)
            printf("Os valores formam um triângulo equilátero.\n");
        else if (A == B || A == C || B == C)
            printf("Os valores formam um triângulo isósceles.\n");
        else
            printf("Os valores formam um triângulo escaleno.\n");
    } else {
        printf("Os valores fornecidos não formam um triângulo.\n");
    }

    return 0;
}
