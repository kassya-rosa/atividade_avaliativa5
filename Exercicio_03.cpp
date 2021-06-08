// Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal 
// e hexadecimal, sendo um em cada linha

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Informe um caracter: ");
	num = getchar();
	fflush(stdin);
	
	printf("\nCaracter: %c\nDecimal: %d\nOctal: %o\nHexadecimal: %x", num, num, num, num);	
	
return 0;
}
