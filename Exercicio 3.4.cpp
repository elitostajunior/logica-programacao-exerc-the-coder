/*
4. Faça um programa para ler o valor de compra, o valor de venda e dias para a validade do produto. O programa deve alertar se o produto está com o preço acima da faixa, 
está na faixa ou abaixo da faixa, seguindo a seguinte regra:

Você deve calcular a porcentagem do acréscimo do produto e usar a data de validade como ajuste de regra.

Se o acréscimo for maior que 10% e a data de validade menor que 15 dias, informar que o produto está com lucro acima da faixa.

Se o acréscimo for menor que 25% e validade for maior que 15 dias, informar que o produto está com o lucro abaixo da faixa.

Em todos os outros casos, o informar que está dentro da faixa.

ENTRADA: valor de compra, valor de venda, dias validade do produto.

PROCESSAMENTO: Acréscimo = Valor de venda - valor de compra.
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


