/*
3. Cobrança de Condomínio

Criar um programa para perguntar o valor do condomínio, o valor da taxa extra e se o morador utilizou a churrasqueira. Se a resposta for SIM, devemos saber quantas vezes
ela foi utilizada.
Agora, devemos acrescentar 5% do valor do condomínio pelo número de vezes que a churrasqueira foi utilizada e imprimir o valor total de pagamento.

Entrada: valorCondominio, valorTaxaExtra, moradorUsouChurrasqueira, numeroVezesChurrasqueiraFoiUtilizado.
Processamento: 5% sobre o valor do condomínio * numeroVezesChurrasqueiraFoiUtilizado.
Saída: total do pagamento.
*/

#include<stdio.h>
#include<conio.h>

int main (){
	
	float valorCondominio, valorTaxaExtra, valorTotalPago, taxaUtilizacao;
	char moradorUsouChurrasqueira;
	int numeroVezesChurrasqueiraFoiUtilizado = 0;
	
	printf("Informe o valor do condominio: ");
	scanf("%f", &valorCondominio);
	printf("Informe o valor da taxa extra: " );
	scanf("%f", &valorTaxaExtra);
	
	printf("O morador utilizou a churrasqueira? (s/n): ");
	scanf("\n%c", &moradorUsouChurrasqueira);
	
	if (moradorUsouChurrasqueira == 's'){
		printf("Informe o numero de vezes que a churrasqueira foi utilizada: ");
		scanf("%d", &numeroVezesChurrasqueiraFoiUtilizado);
	}
	
	taxaUtilizacao = valorCondominio * 5 / 100;
	valorTotalPago = valorCondominio + valorTaxaExtra + (taxaUtilizacao * numeroVezesChurrasqueiraFoiUtilizado);
	
	printf("O valor do condominio a ser pago pelo morador e %.2f", valorTotalPago);
	
	getch();
}
