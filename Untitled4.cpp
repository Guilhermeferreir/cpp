#include<stdio.h>
#include<conio.h>

int main()
{
    float A, B, Auxiliar;
    printf("Entre com o primeiro valor"); 
    scanf("%f", &A);
    printf("Entre com o segundo valor");
    scanf("%f", &B);
    Auxiliar= A;
     A = B;
     B= Auxiliar;
    printf("Os valores são %f, %f", A, B);
    getch();
    return 0; 
}
    
