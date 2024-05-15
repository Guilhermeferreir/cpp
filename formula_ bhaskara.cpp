#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int A, B, C, Delta, X1, X2;
    printf("insira o valor de A:");
    scanf("%d" ,&A);
    printf("insira o valor de B:");
    scanf("%d" ,&B);
    printf("insira o valor de C:");
    scanf("%d" ,&C);
    Delta = pow(B,2)- 4 * A * C;
    X1 = (- B +(sqrt (Delta))) /2 * A;
    X2 = (- B -(sqrt (Delta))) /2 * A;
    
    if (Delta >= 0)
    {
              printf("%2d""%2d", X1, X2);
}
    else
    printf("raiz quadrada nao pertence aos numeros reais, resultado nulo");
    
getch();
return 0;
}
