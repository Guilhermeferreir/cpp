#include<stdio.h>
#include<conio.h>

int main()
{
    float C,F;
    printf("Entre com a temperatura:");
    scanf("f%", &F);
    C=(F-32)*1.8;
    printf("Temperatura em Celsius: %f\n", C);
    getch();
    return 0;
}
    
