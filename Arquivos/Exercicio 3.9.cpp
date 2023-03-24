/*
9. Crie um programa para calcular o salário de uma vendedora. O programa deve pedir o valor vendido no mês pela vendedora. 
Se o valor for até R$ 10.000,00 ela recebe o salário base mais 2% do valor vendido. 
Se a vendedora vendeu entre R$ 10.000,00 e R$ 100.000,00, ela recebe o salário base mais 3,5% do valor vendido. Se a vendedora
vendeu mais que R$ 100.000,00, ela recebe o salário base mais 4,2% do valor vendido.

ENTRADA: salario base, valor vendido no mês, acréscimo.
*/

#include<stdio.h>
#include<conio.h>

int main (){
	
	float salarioBase, valorVendidoMes, acrescimo, seuSalario;
	
	printf("Informe o seu salario base: ");
	scanf("%f", &salarioBase);
	printf("Informe o valor das vendas no mes: ");
	scanf("%f", &valorVendidoMes);
	
	if ( valorVendidoMes < 10000 ){
		acrescimo = salarioBase * 2 / 100; 
	} else if ( valorVendidoMes < 100000 ){
		acrescimo = salarioBase * 3.5 / 100;
	} else {
		acrescimo = salarioBase * 4.2 / 100;
	}
	
	seuSalario = salarioBase + acrescimo;
	
	printf("\nO acrescimo de seu salario base foi de R$ %.2f", acrescimo);
	printf("\nSeu salario final sera de R$ %.2f", seuSalario);
	
	getch();
}
