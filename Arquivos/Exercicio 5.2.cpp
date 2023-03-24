/*
2. Crie um programa e faça uma função para receber a idade de um jogador de futebol e imprimir qual a categoria que ele pertence conforme tabela abaixo:

IDADE --> CATEGORIA
5 a 7 anos --> Infantil A
8 a 10 anos --> Infantil B
11 a 13 anos --> Juvenil A
14 a 17 anos --> Juvenil B
Acima de 18 anos --> Adulto
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void validarCategoriaJogador (int idade){
	if (idade >= 5 && idade <= 7){
		printf("\nO jogador esta na categoria Infantil A");
	} else if (idade >= 8 && idade <= 10){
		printf("\nO jogador esta na categoria Infantil B");
	} else if (idade >= 11 && idade <= 13){
		printf("\nO jogador esta na categoria Juvenil A");
	} else if (idade >= 14 && idade <= 17){
		printf("\nO jogador esta na categoria Juvenil B");
	} else if (idade >= 18){
		printf("\nO jogador esta na categoria Adulto");
	} else {
		printf("\n\nNao existe categoria para esta idade");
	}
}

int main(){
	
	int idade;
	
	printf("Informe a idade do jogador: ");
	scanf("%d", &idade);
	
	validarCategoriaJogador(idade);
	
	getch();
}


