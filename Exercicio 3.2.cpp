/*
2. Crie um programa para receber o sal�rio bruto de um funcion�rio e o n�mero de anos que ele est� na empresa. O programa deve calcular o valor do aumento salario deste funcion�rio conforme tabela abaixo:

Condi��o = % de aumento:
Menos de 1 ano de trabalho ou sal�rio maior que o teto de R$ 20.000,00 = 2% de aumento;
Mais de um ano e menor que 5 anos = 6% de aumento;
Mais de 5 anos = 8% de aumento;
Sal�rio abaixo do Piso de R$ 1500,00 = 15% de aumento.

Entrada: resultado, salarioBruto, anosNaEmpresa, valorAumentoSalario
faixa1 = anosNaEmpresa < 1 || salarioBruto > 20000
faixa2 = anosNaEmpresa > 1
faixa3 = anosnaEmpresa > 5
faixa4 = salarioBruto < 1500
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float salarioBruto, valorAumentoSalario, anosNaEmpresa;
	
	printf("Informe o seu salario: ");
	scanf("%f", &salarioBruto);
	printf("Informe quantos anos voce esta na empresa (se for menos de 1 ano, digite 0): ");
	scanf("%f", &anosNaEmpresa); 
	
	if ( anosNaEmpresa < 1 || salarioBruto > 20000 ){
		valorAumentoSalario = salarioBruto * 0.02;
	} else if ( anosNaEmpresa < 5 ){
		valorAumentoSalario = salarioBruto * 0.06;
	} else if ( anosNaEmpresa >= 5 ){
		valorAumentoSalario = salarioBruto * 0.08;
	} else if ( salarioBruto < 1500 ){
		valorAumentoSalario = salarioBruto * 0.15;
	}
		
	printf("\nSeu aumento de salario sera de R$ %.2f", valorAumentoSalario);
	
	getch();
}
