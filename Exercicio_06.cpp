// Desenvolva um programa em C que apresente um menu de op��es numa janela �bem� amig�vel ao 
// usu�rio, onde este dever� escolher qual a regi�o do Brasil que ele gostaria de conhecer. Ap�s o usu�rio 
// informar esta regi�o, limpe toda a janela e escreva no meio dela qual foi a op��o do usu�rio. Lembrando 
// que as regi�es dever�o ser apresentadas conforme o seguinte menu de op��es: 1 � Norte, 2 � Nordeste, 3 � Centro-Oeste, 4 � Sudeste, 5 � Sul, 0 � Sair do programa

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int regiao;
	
	printf("************************************************");
	printf("\n*************     DF  TURISMO     **************");
	printf("\n************************************************");
	printf("\n\n  Seja Bem-vindo ao site da DF Turismo!\n\n  Qual ser� a regi�o do pa�s que iremos te levar?\n\n");
	printf("      MENU DE OP��ES      \n");
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
				case 1: printf("\n\n\n\n\n              Regi�o escolhida: Norte           \n\n\n\n\n"); break;
				case 2: printf("\n\n\n\n\n              Regi�o escolhida: Nordeste        \n\n\n\n\n"); break;
				case 3: printf("\n\n\n\n\n              Regi�o escolhida: Centro-Oeste    \n\n\n\n\n"); break;
				case 4: printf("\n\n\n\n\n              Regi�o escolhida: Sudeste         \n\n\n\n\n"); break;
				case 5: printf("\n\n\n\n\n              Regi�o escolhida: Sul             \n\n\n\n\n"); break;
				default:printf("\n\n\n\n\n              Regi�o inv�lida!");
			};
	}	
	
return 0;
}
