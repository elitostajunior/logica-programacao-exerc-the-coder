/*
4. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o sal�rio e n�mero de filhos. 
Fa�a um programa para ler esses dados para um n�mero X de pessoas e imprima a m�dia de sal�rio da popula��o, a m�dia do n�mero de filhos, 
o maior sal�rio e o percentual de pessoas com sal�rio at� R$1.000,00.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int i, x, numeroFilhos, somaFilhos, quantSalarioAteMil = 0;
	float salario, mediaSalario = 0, porcSalarioAteMil, maiorSalario = 0, mediaFilhos = 0, somaSalario;
	
	printf("Digite a quantidade de entrevistados: ");
	scanf("%d", &x);
	
	for(i = 1; i <= x; i++){
		printf("\nInsira o seu salario: ");
		scanf("%f", &salario);
		
		printf("\nInsira o numero de filhos. Se nenhum, digite 0: ");
		scanf("%d", &numeroFilhos);
	
		somaFilhos += numeroFilhos;
		
		somaSalario += salario;
		
		if (salario > maiorSalario)
		maiorSalario = salario;
		
		if (salario <= 1000)
		quantSalarioAteMil++;
		
		porcSalarioAteMil = (quantSalarioAteMil * 100) / x;
		system ("@clear||cls");
	}
		
		mediaSalario = somaSalario / x; 
		mediaFilhos = somaFilhos / x;
		
	
	printf("\n\n#####RESPOSTAS#####");
	printf("\nA media salarial dos entrevistados e: R$ %.2f", mediaSalario);
	printf("\nA media da quantidade de filhos dos entrevistados e: %.2f", mediaFilhos);
	printf("\nO maior salario dos entrevistados e: %.2f", maiorSalario);
	printf("\nPercentual de entrevistados que ganham ate R$ 1000: %.2f", porcSalarioAteMil);
	
	getch();
}

