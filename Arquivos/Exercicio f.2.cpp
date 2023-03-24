/*
2. Crie uma função para calcular o fatorial de um número. Fatorial é a multiplicação de todos os números de 1 ate o número em questão. 

Ex.: 4! = 4 x 3 x 2 x 1 = 24
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fatorial (int numero){
	if (numero > 0){
		printf("\nNumero atual = %d", numero);
		int valorAtual = numero;
		numero--;
		return valorAtual * fatorial(numero);
	}
	return 1;
}

int main(){
	
	int total = 4 * 3 * 2 * 1;
	printf("\nTotal = %d", total);
	printf("\n\nO fatorial de 4 e %d", fatorial(4));
	
	getch();
}
