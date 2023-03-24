/*
2. Criar um programa para receber um n�mero e informar se o n�mero � Par ou �mpar.
Entrada de dados: N�mero
Processamento: Descobrir se o n�mero � par ou �mpar.
Sa�da: Impress�o de par ou impar.

Para descobrir se o n�mero � par ou impar:
Se o n�mero for divis�vel por 2 � PAR; se n�o, � IMPAR. 

% = retorna o resto da divis�o do n�mero.
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
