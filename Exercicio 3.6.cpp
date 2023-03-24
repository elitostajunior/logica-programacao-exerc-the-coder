/*
6. A CEF concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldo médio no último ano. Faça um programa que leia o saldo médio de um
cliente e calcule o valor do crédito de acordo com a tabela a seguir. Imprimir uma mensagem informando o saldo médio e o valor de crédito.

SALDO MÉDIO -> PERCENTUAL:
De 0 a 500 -> Nenhum crédito
De 501 a 1000 -> 30% do valor do saldo médio
De 1001 a 3000 -> 40% do valor do saldo médio
Acima de 3001 -> 50% do valor do saldo médio

ENTRADA: saldo médio, valor do crédito.
*/

#include<stdio.h>
#include<conio.h>

int main (){
	
	float saldoMedio, valorCredito, porcentagem; 
	
	printf("Informe o valor do seu saldo medio no ultimo ano: ");
	scanf("%f", &saldoMedio);
	
	printf("\nSeu saldo medio e de R$ %.2f", saldoMedio);
	
	if ( saldoMedio < 500 ){
		printf("\nDesculpe, voce nao possui saldo suficiente para obter credito");
	} else if ( saldoMedio < 1000 ){
		valorCredito = (saldoMedio * 30) / 100;
	} else if ( saldoMedio < 3000 ){
		valorCredito = (saldoMedio * 40) / 100;
	} else {
		valorCredito = (saldoMedio * 50) / 100;
	}
	
	printf("\nSeu valor de credito e de R$ %.2f", valorCredito);
	
	getch();
}
