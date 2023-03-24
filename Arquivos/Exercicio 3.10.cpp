/*
10..João recebeu seu salário de R$ 2.400,00 e precisa pagar duas contas atrasadas no valor de R$ 200,00 e R$170,00. Como as contas estão atrasadas, terá de pagar multa
de 4,3% sobre cada conta. Faça um programa que calcule e mostre quanto restará do seu salário.

ENTRADA: salário = 2400, conta 1 = 200, conta 2 = 170, multa = 4,3%
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float salario, conta1, conta2, valorMulta, multa, divida, restante;
	
	salario = 2400;
	conta1 = 200;
	conta2 = 170;
	
	printf("Meu salario: R$ %.2f", salario);
	printf("\nPrimeira conta: R$ %.2f", conta1);
	printf("\nSegunda conta: R$ %.2f", conta2);
	
	divida = conta1 + conta2;
	
	valorMulta = divida * (8.6 / 100);
	
	restante = salario - (divida + valorMulta);
	
	printf("\nTotal das dividas: R$ %.2f", divida);
	printf("\nValor da multa: %.2f", valorMulta);
	printf("\n\nApos pagamento das contas em atraso, restara R$ %.2f do seu salario", restante);
	
	getch();
}
