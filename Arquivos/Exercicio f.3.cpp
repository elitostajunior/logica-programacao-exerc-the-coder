/*
3. Crie um programa ler 10 n�meros em um vetor. 
Depois, voc� deve perguntar se o usu�rio quer ver os n�meros pares ou �mpares e imprimir apenas os n�meros do tipo que ele escolheu.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int i, numero[10];
	
	for (i = 0; i <= 10; i++){
		printf("\nInforme o numero da posicao %d: ", i);
		scanf("%d", &numero[i]);
	}
	
	int opcao;
	
	printf("\n\nDigite a opcao desejada: (1) para ver os numeros pares ou (2) para ver os numeros impares: ");
	scanf("%d", &opcao);
	
	for (i = 0; i <= 10; i++){
		if (numero[i] % 2 == 0 && opcao == 1){
			printf("\nO numero %d na posicao %d e PAR", numero[i], i);
		} else if (numero[i] % 2 == 0 && opcao == 2){
			printf("\n");
		} else if (numero[i] % 2 == 1 && opcao == 1){
			printf("\n");
		} else if (numero[i] % 2 == 1 && opcao == 2){
			printf("\nO numero %d na posicao %d e IMPAR", numero[i], i);
		} else {
			printf("\nValor desconhecido");
		}
	}
	
	getch();
}


