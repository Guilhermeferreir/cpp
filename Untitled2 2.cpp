#include<stdio.h>
#include<conio.h>

int main() {
	int a, a[12],i,j,x;
	for(i=1; i<=12;++i){
		printf("digite um valor: ");
		scanf("%d", &a[i]);
	}
	for(i=1;i<=12;++i){
		for(j=i+1;j<=13;++j){
			if(a[i]<a[j]){
				x=a[1];
				a[i]=a[j];
				a[j]=a[j];
				a[j]=x;
			}
		}
	}
	for(i=1;i<=12;++1){
		printf("%d\n", a[i]);
	}
	getch();
	return 0;0
}
