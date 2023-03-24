/*
4. Fa�a um programa para ler o valor de compra, o valor de venda e dias para a validade do produto. O programa deve alertar se o produto est� com o pre�o acima da faixa, 
est� na faixa ou abaixo da faixa, seguindo a seguinte regra:

Voc� deve calcular a porcentagem do acr�scimo do produto e usar a data de validade como ajuste de regra.

Se o acr�scimo for maior que 10% e a data de validade menor que 15 dias, informar que o produto est� com lucro acima da faixa.

Se o acr�scimo for menor que 25% e validade for maior que 15 dias, informar que o produto est� com o lucro abaixo da faixa.

Em todos os outros casos, o informar que est� dentro da faixa.

ENTRADA: valor de compra, valor de venda, dias validade do produto.

PROCESSAMENTO: Acr�scimo = Valor de venda - valor de compra.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float valorCompra, valorVenda, acrescimo;
	int diasParaVencimento;
	
	printf("Insira o valor da compra: ");
	scanf("%f", &valorCompra);
	printf("Insira o valor da venda: ");
	scanf("%f", &valorVenda);
	printf("Insira os dias que faltam para o vencimento do produto: ");
	scanf("%d", &diasParaVencimento);
	
	acrescimo = valorVenda / valorCompra;
	
	if ( acrescimo > 1.10 && diasParaVencimento < 15 ){
		printf("\nO produto esta com lucro acima da faixa");
	} else if ( acrescimo < 1.25 && diasParaVencimento > 15){
		printf("\nO produto esta com lucro abaixo da faixa");
	} else {
		printf("\nO produto esta dentro da faixa");
	}
	
	getch();
}


