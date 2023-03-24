/*
1. Crie um programa para o usu�rio passar o valor a ser emprestado, e o n�mero de parcelas. O programa deve ter uma fun��o para retornar o valor do juros simples. 
A fun��o deve receber o valor do empr�stimo, a taxa de juros e o n�mero de parcela e retornar o valor.

F�rmula: valor_emprestimo * (tx_juros / 100) * n_parcela
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float calcJuros(float valorEmprestimo, int parcela, float tx){
	float juros = valorEmprestimo * tx / 100 * parcela;
	return juros;
}

int main(){
	
	float valorEmprestimo, juros;
	int numeroParcela;
	const float TAXA = 5;
	
	printf("Informe o valor do emprestimo: ");
	scanf("%f", &valorEmprestimo);
	
	printf("Informe o numero de parcelas: ");
	scanf("%d", &numeroParcela);
	
	juros = calcJuros(valorEmprestimo, numeroParcela, TAXA);
	
	printf("\nOs juros para o emprestimo e de R$ %.2f", juros);
	printf("\nO valor de cada parcela e de R$ %.2f", (valorEmprestimo + juros) / numeroParcela);
	
	getch();
}
