// calcula a distância percorrida e o número de litros de combustível consumidos com base no tempo e na velocidade inseridos

#include<stdio.h>
#include<conio.h>

int main()
{
    float  t, v, dis, litusa;
    printf ("Entre com o tempo:");
    scanf("%f", &t);
    printf("Entre com a velocidade:");
    scanf("%f",&v);
    dis = v * t;
    litusa = dis/12;
    printf("Velocidade: %f\nTempo: %f\nDist�ncia: %f\nLitros usados: %f", v, t, dis, litusa);
    getch();
    return 0;
}                         
