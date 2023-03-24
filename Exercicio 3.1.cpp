/*
1. Crie um programa para ler 2 números e imprimir qual o menor entre eles ou se eles são iguais.

Entrada: num1, num2.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1, num2;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("\nO numero %d e o maior numero", num1);
	} else if (num1 < num2){
		printf("\nO numero %d e o maior numero", num2);
	} else {
		printf("\nOs dois numeros sao iguais");
	}
	
	getch();
}
