/*
5. Uma revendedora de carros paga a seus vendedores um salário fixo por mês, mais uma comissão 7% do valor das vendas de cada carro feitas por ele. 
Faça um programa para ler o valor de cada uma de suas vendas e o salário fixo. Calcule e escreva o salário final do vendedor e a sua comissão.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	float salarioFixo, salarioFinal, comissao, comissaoFinal, acrescimo;
	int quantCarrosVendidos;
	
	comissao = 0.07;
	
	printf("Informe o seu salario fixo mensal: R$ ");
	scanf("%f", &salarioFixo);
	printf("Informe quantos carros foram vendidos neste mes: ");
	scanf("%d", &quantCarrosVendidos);
	
	acrescimo = salarioFixo * comissao;
	
	comissaoFinal = acrescimo * quantCarrosVendidos;
	
	salarioFinal = salarioFixo + comissaoFinal;
	
	printf("\n\nO seu salario final ficou no valor de R$ %.2f", salarioFinal);
	printf("\nSuas comissoes finais ficaram no valor de R$ %.2f", comissaoFinal);
	
	getch();
}
