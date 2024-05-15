// Este código em C calcula o salário líquido de um funcionário com base no salário bruto e na quantidade de horas trabalhadas, considerando também o pagamento de horas extras.

#include<stdio.h>

int main() {

    float SalBr, Hrs, adic, SalLiq;
    
    printf("Digite o salario bruto: ");
    scanf("%f", &SalBr);
    
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &Hrs);
    
    if (Hrs > 160) {
        adic = (SalBr / 160) + (Hrs - 160) * 0.50;
        SalBr += adic;
    }
    
    SalLiq = SalBr;
    
    if (SalBr <= 800.00) {
        printf("O salario liquido e: %.2f\n", SalLiq);
    } else if (SalBr <= 1600.00) {
        SalLiq -= SalBr * 0.22;
        printf("O salario liquido e: %.2f\n", SalLiq);
    } else {
        SalLiq -= SalBr * 0.30;
        printf("O salario liquido e: %.2f\n", SalLiq);
    }
    
    return 0;
}
