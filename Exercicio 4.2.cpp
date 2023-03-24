/*
2. Crie um programa para ler salários de funcionários de uma empresa. O programa deve ler salários até que não existam mais funcionários. Ao término, devemos
imprimir a soma dos salários líquidos a ser pago pela empresa.

FÓRMULA: salarioliquido = vt - vr - ir
vt = 1% do sal bruto
vr = 2% do sal bruto

ir =
Até R$ 3000 - 12% do sal bruto
de R$ 3001 até R$ 5500 - 17% do sal bruto
acima de R$ 5501 - 27.5%
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	float salario, vt, vr, ir, totalSalarioLiquido = 0;
	char opcao;
	
	//loop infinito
	while ( true ){
		printf("Existe algum funcionario para ler o salario? (s / n): ");
		scanf("\n%c", &opcao);
		
		//Se a opção digitada pelo usuário não for s, fim do programa.
		if (opcao != 's') break;
		
		printf("Informe o salario do funcionario: ");
		scanf("%f", &salario);
		
		vt = salario * 0.01;
		vr = salario * 0.02;
		
		if (salario <= 3000)
		ir = salario * 0.12;
		else if (salario <= 5500)
		ir = salario * 0.17;
		else
		ir = salario * 0.275;
		
		totalSalarioLiquido += (salario - vt - vr - ir); 
		system ("@clear||cls");
	}
	
	printf("\n\nFIM DO PROGRAMA ######");
	printf("\nO somatorio do salario liquido e: %.2f", totalSalarioLiquido);
	
	getch();
}
