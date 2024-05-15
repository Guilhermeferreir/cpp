#include<stdio.h>
#include<conio.h>

int main() {
	int a, a[30], b[30], i, pesq;
	char acha;
	acha=0
	for(i=1;i<=30;++1){
		printf("digite um valor: ");
		scanf("%d", &a[i]);
		b[i]=a[i]*a[i] *a[i];
	}
	for(i=1; i<=30;++i){
		print("%d \n" ,b[i]);
	}
	printf("\n entre com o numero a ser pesquisado: ");
	scanf("%d", &pesq);
	i=1;
	while(i<31 && acha==0){
		if(pesq==b[1]){
			printf("o numero %d se encontra na posicao %d" ,b[i],i);
			acha=1;
		}
		else {
			 i++;
		}
	}
	}
	getch();
	return 0;
}
