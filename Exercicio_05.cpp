// Fa�a um programa que pergunte ao usu�rio qual a letra inicial do seu sexo (masculino/feminino) e 
// escreva por extenso o sexo informado, usando o operador condicional tern�rio

#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

	char sexo;
	
	do{
	printf("Digite o seu sexo [F|M]: ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	sexo = toupper(sexo);
	
	}while(sexo!='F'&&sexo!='M');
		
	sexo == 'F' ? printf("Feminino") : printf("Masculino");
	
return 0;
}
