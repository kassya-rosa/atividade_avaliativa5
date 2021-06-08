// Desenvolva um programa em C que leia três valores numéricos e apresente o maior valor informado no 
// meio de uma janela limpa.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

	int maior,num1, num2, num3;

	printf("Solicitamos informar 3 números inteiros\n\nPrimeiro número: ");
	scanf("%d",&num1);
	fflush(stdin);
		
	printf("Segundo número: ");
	scanf("%d",&num2);
	fflush(stdin);
	
	printf("Terceiro número: ");
	scanf("%d",&num3);
	fflush(stdin);
	
	if(num1>num2 && num1>num3)
		maior = num1;
		else if(num2>num1 && num2>num3)
			maior = num2;
			else
				maior = num3;
				
	system("cls");
				
	printf("O maior número é: %d", maior);
	
	return 0;
}
