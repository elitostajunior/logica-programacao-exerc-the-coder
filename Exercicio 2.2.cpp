/*
2. Criar um programa para receber um número e informar se o número é Par ou Ímpar.
Entrada de dados: Número
Processamento: Descobrir se o número é par ou ímpar.
Saída: Impressão de par ou impar.

Para descobrir se o número é par ou impar:
Se o número for divisível por 2 é PAR; se não, é IMPAR. 

% = retorna o resto da divisão do número.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int numero, restoDivisaoPor2;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	restoDivisaoPor2 = numero % 2;
	
	if (restoDivisaoPor2 == 0){
		printf("\nO numero %d e PAR", numero);
	} else {
		printf("\nO numero %d e IMPAR", numero);
	}
	
	getch();
}
