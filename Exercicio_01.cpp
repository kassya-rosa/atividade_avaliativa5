// Elabore um programa que solicite ao usuário um valor percentual a ser calculado. Este cálculo deverá 
// ocorrer sobre um valor constante igual a 555. O programa deverá calcular o percentual desejado e 
// apresentar o resultado calculado deste percentual.

#include<stdio.h>
#include<locale>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float percentual, calculo;
	char aux;
	
	do{
	
	printf("Informe o percentual desejado: ");
	scanf("%f", &percentual);
	fflush(stdin);
	
	calculo = 555*(percentual/100);
	
	printf("\nValor calculado: %.1f\n", calculo);
	
	printf("\nDeseja informar outro percentual[S|N]? ");
	scanf("%c", &aux);
	
	aux = toupper(aux);
	
	system("cls");
	
	}while(aux == 'S');

return 0;
}
