#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	int i, j, op, acha, a=1;
	char pesq[60];
	struct conce{
		char mod[60];
		char cor[60];
		float pre;
		char placa[6];
	};
	struct conce x[5], aux;
	do{
	printf("Escolha uma opcao:\n 1-Cadastro\n2-Pesquisa\n3-Ordenacao\n4-Alteracao\n5-Sair\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			for(i=0;i<=4;++i){
				fflush(stdin);
				printf("Digite o modelo do carro: ");
				fgets(x[i].mod,60,stdin);
				fflush(stdin);
				printf("Digite a cor do carro: ");
				fgets(x[i].cor,60,stdin);
				fflush(stdin);
				printf("Digite a placa do carro: ");
				fflush(stdin);
				fgets(x[i].placa,6,stdin);
				printf("Digite o preco do carro: ");
				fflush(stdin);
				scanf("%f", &x[i].pre);
			}
			break;
			case 2:
				fflush(stdin);
				printf("Digite a cor do carro que queira pesquisar: ");
				fgets(pesq,60,stdin);
				acha=0;
				i=0;
				while(i<=4){
					if(strcmp(pesq,x[i].cor)>0){
						printf("O modelo e %s\n A cor e %s\n A placa e %s\n O preco e %.2f\n",x[i].mod, x[i].cor, x[i].placa, x[i].pre);
						break;
					}
					else{
						i++;
					}
				}
				break;
			case 3:
			for(i=0;i<=4;i++){
				for(j=i+1;j<=5;j++){
					if(strcmp(x[i].mod,x[j].mod)>0){
						aux=x[i];
						x[i]=x[j];
						x[j]=aux;
					}	
				}
			}
			for(i=0;i<=4;i++){
				printf("O carro na posicao %d e %s\n", i, x[i].mod);
			}
			break;	
			case 4:
				fflush(stdin);
				printf("Digite a cor do carro que quer pesquisar: ");
				fgets(pesq,60,stdin);
				acha=0;
				i=0;
				while(i<=4){
					if(strcmp(pesq,x[i].cor)>0){
						fflush(stdin);
				printf("Digite o modelo do carro: ");
				fgets(x[i].mod,60,stdin);
				fflush(stdin);
				printf("Digite a cor do carro: ");
				fgets(x[i].cor,60,stdin);
				fflush(stdin);
				printf("Digite a placa do carro: ");
				fflush(stdin);
				fgets(x[i].placa,6,stdin);
				printf("Digite o preco do carro: ");
				fflush(stdin);
				scanf("%f", &x[i].pre);
			}
			else{
				i++;
			}
		}
		break;
	}
}
		
	while(op!=5);
	
getch();
return 0;
}

