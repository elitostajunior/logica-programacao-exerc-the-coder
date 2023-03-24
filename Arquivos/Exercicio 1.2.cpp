/*
2. Criar um programa para ler o nome e o sal�rio bruto de um funcion�rio e imprimir o seu nome e o sal�rio l�quido.
O Sal�rio l�quido � igual ao sal�rio bruto menos os descontos
Descontos:
a. IR - 15% do sal�rio bruto
b. VT - 6% do sal�rio bruto
c. VR - 1.5% do sal�rio bruto

ENTRADA: Nome, Sal�rio bruto e Sal�rio l�quido.
PROCESSAMENTO: C�lculo do sal�rio l�quido = Sal�rio bruto - (15% + 6% + 1.5%)
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

