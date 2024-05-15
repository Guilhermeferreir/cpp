#include<stdio.h>
#include<conio.h>

int main()
{
    float V, R, A;
    printf("Entre com o raio");
    scanf("%f", &R);
    printf("Entre com a altura");
    scanf("%f", &A);
    V = 3.14 * R * R * A;
    printf("O volume � %f" , V);
    getch();
    return 0;
}
