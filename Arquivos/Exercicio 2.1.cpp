#include<stdio.h>
#include<conio.h>

/*
1. Adiantamento de dívida
Criar um programa para o usuário informar o valor da dívida e o valor em % de quando deseja pagar adiantado. O programa deve calcular o valor pago e o valor restante a ser
pago.
Se o valor adiantado for menor que 20%, ele ganha um desconto de 2% no pagamento.
Se o valor for entre 20% e 65%, o desconto de 5%. Para valor maior que 65%, o desconto é de 9% no pagamento.

ENTRADA: valor da dívida bruta, porcentagem do valor a ser pago antecipadamente, valor a pagar e valor restante a ser pago.
PROCESSAMENTO: porcentagem do valor = valor da dívida bruta * valor a pagar / 100
SAÍDA: valor a pagar e valor restante da dívida
*/

int main(){
	
	float valorDivida, valorPagamento, valorPago, valorPagoReal, valorRestanteDivida;
	
	printf("Informe o valor total da divida: ");
	scanf("%f", &valorDivida);
	printf("\nInforme o valor (em porcentagem) que deseja pagar: ");
	scanf("%f", &valorPagamento);
	
	valorPago = valorDivida * valorPagamento / 100;
	
	if (valorPagamento < 20){
		valorPagoReal = valorPago * (100-2) / 100;
	} else if (valorPagamento < 65){
		valorPagoReal = valorPago * (100-5) / 100;
	} else {
		valorPagoReal = valorPago * (100 - 9) / 100;
	}
	
	valorRestanteDivida = valorDivida - valorPago;
	
	printf("\n\nCALCULO DE PAGAMENTO:");
	printf("\nTotal da divida: %.2f", valorDivida);
	printf("\nPorcentagem do pagamento: %.2f", valorPagamento);
	printf("\nValor de pagamento: %.2f", valorPago);
	printf("\nValor real de pagamento (com desconto): %.2f", valorPagoReal);
	printf("\nValor restante da divida: %.2f", valorRestanteDivida);
	
	getch();
}
