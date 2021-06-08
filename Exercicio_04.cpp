// Uma loja de móveis de informática está necessitando de um sistema que identifique quais móveis de 
// informática estão sendo solicitados pelos seus clientes. Os móveis disponibilizados por esta empresa são: 
// 1-cadeira, 
// 2-mesa de computador, 
// 3-estante de livros, 
// 4-mesa de impressora e 
// 5-estante de CD. 
// Quando se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int movel;
	
	printf("\n\n             Loja de móveis DF              \n\n");
	printf("Em nosso estoque temos os móveis abaixo:\n\n1 - Cadeira\n2 - Mesa de computador\n3 - Estante de livros\n4 - Mesa de impressora\n5 - Estante de CD\n");
	printf("\nInforme a opção desejada: ");
	scanf("%d", &movel);
	fflush(stdin);
	
	system("cls");
	
	switch(movel){
		case 1: printf("\nÓtima escolha! Providenciaremos sua cadeira neste momento\n"); break;
		case 2: printf("\nÓtima escolha! Providenciaremos sua mesa de computador neste momento\n"); break;
		case 3: printf("\nÓtima escolha! Providenciaremos sua estante de livros neste momento\n"); break;
		case 4: printf("\nÓtima escolha! Providenciaremos sua mesa de impressora neste momento\n"); break;
		case 5: printf("\nÓtima escolha! Providenciaremos sua estante de CD neste momento\n"); break;
		default: printf("\nNão possuímos este móvel em nosso estoque.");
	};
	
	
	return 0;
}
