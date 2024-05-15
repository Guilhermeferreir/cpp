// programa calcula o número de meses de atraso no pagamento com base no valor da compra, no valor da prestação paga e na taxa de juros fornecida pelo usuário.
#include<stdio.h>

int main() {
    float P, V, T, Taxa;
    printf("Entre com o valor da compra: ");
    scanf("%f", &V);
    printf("Entre com o valor da prestação: ");
    scanf("%f", &P);
    printf("Entre com a taxa de juros (em porcentagem): ");
    scanf("%f", &Taxa);

    T = (P - V) / (V * (Taxa / 100));
    printf("O atraso é de %.2f meses.\n", T);

    return 0;
}
