// este código calcula o valor absoluto de um número real inserido pelo usuário e o imprime na tela

#include<stdio.h>
#include<conio.h>

int main() {
    float N;
    int X; 

    printf("Entre com o valor de N: ");
    scanf("%f", &N);

    if (N < 0) {
        X = -N;
    } else {
        X = N;
    }

    printf("O valor absoluto de N e: %d\n", X);

    getch();
    return 0;
}
