// Faça um programa que leia três valores numéricos e os mostre em ordem crescente

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menor, maior, num1, num2, num3, meio;
	
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	fflush(stdin);
			
	printf("\nDigite um número inteiro: ");
	scanf("%d", &num2);
	fflush(stdin);
	
	printf("\nDigite um número inteiro: ");
	scanf("%d", &num3);
	fflush(stdin);
			
	system("cls");
	
	if(num1<num2&&num1<num3)
		menor = num1;
		else
			if(num2<num1&&num2<num3)
				menor = num2;
				else
					if(num3<num1&&num3<num2)
						menor = num3;
						
	if(num1>num2&&num1>num3)
		maior = num1;
		else
		if(num2>num1&&num2>num3)
			maior = num2;
			else
				if(num3>num1&&num3>num2)
					maior = num3;
	
	if((num1>num2&&num1<num3)||(num1<num2&&num1>num3))
		meio = num1;
		else
		if((num2>num1&&num2<num3)||(num2<num1&&num2>num3))
			meio = num2;
			else
			if((num3>num1&&num3<num2)||(num3<num1&&num3>num2))
												meio = num3;
				
	
	printf("Ordem crescente: %d - %d - %d", menor, meio, maior);
	
return 0;
}
