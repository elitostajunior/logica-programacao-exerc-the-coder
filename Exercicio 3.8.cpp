/*
8. A empresa ABCD paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Fa�a um programa para calcular e imprimir o sal�rio bruto e o sal�rio l�quido
de um determinado funcion�rio. Considere que o sal�rio l�quido � igual ao sal�rio bruto descontando-se 10% de impostos e pergunte o n�mero de horas e horas extras
que o funcion�rio fez no m�s.

ENTRADA: valor hora trabalhada, valor hora extra, sal�rio bruto, sal�rio l�quido, desconto.
PROCESSAMENTO: sal�rio l�quido = sal�rio bruto - desconto
Desconto = salario bruto * 10 / 100
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float valorHoraTrabalhada, valorHoraExtra, salarioBruto, salarioLiquido, desconto;
	int horasTrabalhadas, horasExtras;
	
	printf("Informe quantas horas trabalhadas voce fez no mes: ");
	scanf("%d", &horasTrabalhadas);
	
	printf("Informe quantas horas extras voce fez no mes: ");
	scanf("%d", &horasExtras);
	
	valorHoraTrabalhada = 10;
	
	valorHoraExtra = 15;
	
	salarioBruto = (valorHoraTrabalhada * horasTrabalhadas) + (valorHoraExtra * horasExtras);
	
	desconto = salarioBruto * 10 / 100;
	
	salarioLiquido = salarioBruto - desconto;
	
	printf("\nO seu salario bruto e de R$ %.2f", salarioBruto);
	
	printf("\nO seu salario liquido e de R$ %.2f", salarioLiquido);
	
	getch();
}


