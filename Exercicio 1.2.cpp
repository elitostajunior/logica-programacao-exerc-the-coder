/*
2. Criar um programa para ler o nome e o salário bruto de um funcionário e imprimir o seu nome e o salário líquido.
O Salário líquido é igual ao salário bruto menos os descontos
Descontos:
a. IR - 15% do salário bruto
b. VT - 6% do salário bruto
c. VR - 1.5% do salário bruto

ENTRADA: Nome, Salário bruto e Salário líquido.
PROCESSAMENTO: Cálculo do salário líquido = Salário bruto - (15% + 6% + 1.5%)
*/

#include<stdio.h>
int main(){
	
	char nomeFuncionario [20];
	float salarioBruto, salarioLiquido, ir, vt, vr;
	
	printf("Informe o nome do funcionario: ");
	scanf("%s", &nomeFuncionario);
	printf("Informe seu salario bruto: ");
	scanf("%f", &salarioBruto);
	
	ir = salarioBruto * 15 / 100;
	vt = salarioBruto * 6 / 100;
	vr = salarioBruto * 1.5 / 100;
	
	salarioLiquido = salarioBruto - (ir + vt + vr);
	
	printf("\n\nSeu salario liquido foi de %.2f", salarioLiquido);
	printf("\n\nDESCONTOS DETALHADOS");
	printf("\nImposto de renda: %.2f", ir);
	printf("\nVale transporte: %.2f", vt);
	printf("\nVale refeicao: %.2f", vr);
	
}

