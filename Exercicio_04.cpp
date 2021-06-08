// Uma loja de m�veis de inform�tica est� necessitando de um sistema que identifique quais m�veis de 
// inform�tica est�o sendo solicitados pelos seus clientes. Os m�veis disponibilizados por esta empresa s�o: 
// 1-cadeira, 
// 2-mesa de computador, 
// 3-estante de livros, 
// 4-mesa de impressora e 
// 5-estante de CD. 
// Quando se tratar de um m�vel que n�o exista na empresa informe ao cliente que ainda n�o est� dispon�vel.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int movel;
	
	printf("\n\n             Loja de m�veis DF              \n\n");
	printf("Em nosso estoque temos os m�veis abaixo:\n\n1 - Cadeira\n2 - Mesa de computador\n3 - Estante de livros\n4 - Mesa de impressora\n5 - Estante de CD\n");
	printf("\nInforme a op��o desejada: ");
	scanf("%d", &movel);
	fflush(stdin);
	
	system("cls");
	
	switch(movel){
		case 1: printf("\n�tima escolha! Providenciaremos sua cadeira neste momento\n"); break;
		case 2: printf("\n�tima escolha! Providenciaremos sua mesa de computador neste momento\n"); break;
		case 3: printf("\n�tima escolha! Providenciaremos sua estante de livros neste momento\n"); break;
		case 4: printf("\n�tima escolha! Providenciaremos sua mesa de impressora neste momento\n"); break;
		case 5: printf("\n�tima escolha! Providenciaremos sua estante de CD neste momento\n"); break;
		default: printf("\nN�o possu�mos este m�vel em nosso estoque.");
	};
	
	
	return 0;
}
