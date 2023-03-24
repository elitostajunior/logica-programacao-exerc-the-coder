/*
3. Programa para ler a idade de uma pessoa e o número de filhos. Calcular a proposta do valor do plano de saúde para ele. 
A proposta do plano de saúde será calculada com base no valor inicial do plano de R$ 200,00 mais R% 83,00 por cada filho.

ENTRADA: Nome, idade, número de filhos, proposta plano de saúde
PROCESSAMENTO: R$ 200 + R$ 83 * quantidade de filhos"
*/

#include<stdio.h>
int main(){
	
	char nome [20];
	float idade, valor1, valor2, quantFilhos, valorPlano;
	
	valor1 = 200;
	valor2 = 83;
	
	printf("Informe o seu nome: ");
	scanf("%s", &nome);
	printf("Informe quantos filhos voce tem. Se nenhum, digite 0: ");
	scanf("%f", &quantFilhos);
	
	valorPlano = valor1 + (valor2 * quantFilhos);
	
	printf("\nNome do candidato: %s", nome);
	printf("\nO valor do seu plano de saude ficara em R$ %.2f", valorPlano);
	
}
