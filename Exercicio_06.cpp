// Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao 
// usuário, onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário 
// informar esta região, limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando 
// que as regiões deverão ser apresentadas conforme o seguinte menu de opções: 1 – Norte, 2 – Nordeste, 3 – Centro-Oeste, 4 – Sudeste, 5 – Sul, 0 – Sair do programa

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int regiao;
	
	printf("************************************************");
	printf("\n*************     DF  TURISMO     **************");
	printf("\n************************************************");
	printf("\n\n  Seja Bem-vindo ao site da DF Turismo!\n\n  Qual será a região do país que iremos te levar?\n\n");
	printf("      MENU DE OPÇÕES      \n");
	printf("      ==============      \n");
	printf("      1 - Norte           \n");
	printf("      2 - Nordeste        \n");
	printf("      3 - Centro-Oeste    \n");
	printf("      4 - Sudeste         \n");
	printf("      5 - Sul             \n");
	printf("      0 - Sair do programa\n");
	scanf("%d", &regiao);
	
	if(regiao == 0);
	
		else{ 
		system("cls");
			switch(regiao){
				case 1: printf("\n\n\n\n\n              Região escolhida: Norte           \n\n\n\n\n"); break;
				case 2: printf("\n\n\n\n\n              Região escolhida: Nordeste        \n\n\n\n\n"); break;
				case 3: printf("\n\n\n\n\n              Região escolhida: Centro-Oeste    \n\n\n\n\n"); break;
				case 4: printf("\n\n\n\n\n              Região escolhida: Sudeste         \n\n\n\n\n"); break;
				case 5: printf("\n\n\n\n\n              Região escolhida: Sul             \n\n\n\n\n"); break;
				default:printf("\n\n\n\n\n              Região inválida!");
			};
	}	
	
return 0;
}
