/*
6. A CEF conceder� um cr�dito especial com juros de 2% aos seus clientes de acordo com o saldo m�dio no �ltimo ano. Fa�a um programa que leia o saldo m�dio de um
cliente e calcule o valor do cr�dito de acordo com a tabela a seguir. Imprimir uma mensagem informando o saldo m�dio e o valor de cr�dito.

SALDO M�DIO -> PERCENTUAL:
De 0 a 500 -> Nenhum cr�dito
De 501 a 1000 -> 30% do valor do saldo m�dio
De 1001 a 3000 -> 40% do valor do saldo m�dio
Acima de 3001 -> 50% do valor do saldo m�dio

ENTRADA: saldo m�dio, valor do cr�dito.
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
