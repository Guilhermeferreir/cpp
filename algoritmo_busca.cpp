#include<stdio.h>
#include<conio.h>

int main() {
    int a[20], b[20], i, j, x, pesq; 
    int acha = 0; 
    
    for(i = 0; i <= 19; i++) {
        printf("Entre com um numero: ");
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < 19; i++) {
        for(j = i + 1; j <= 19; j++) { 
            if(a[i] > a[j]) { 
                x = a[i];
                a[i] = a[j];
                a[j] = x; 'a'
            }
        }
    }
    
    for(i = 0; i <= 19; i++) {
        printf("%d\n", a[i]); 
    }
    
    printf("Entre com o numero a ser pesquisado: ");
    scanf("%d", &pesq);
    
    i = 0;
    while(i <= 19 && acha == 0) {
        if(a[i] == pesq) {
            printf("O valor %d esta na posicao %d\n", pesq, i);
            acha = 1;
        }
        i++;
    }
    
    if(acha == 0) {
        printf("O numero nao foi encontrado.\n");
    }
    
    getch();
    return 0;
}