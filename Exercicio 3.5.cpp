/*
5. Criar um programa para calcular o Índice de Massa Corporal de uma pessoa. Levando em consideração que o cálculo é da seguinte forma:

IMC = PESO / (ALTURA * ALTURA)

RESULTADOS IMC:
- 18,5 -> Abaixo do peso
18,6 a 24,9 -> Peso normal
25 a 29,9 -> Sobrepeso Pré-obesidade
30 a 34,9 -> Obesidade Grau 1
35 a 39,9 -> Obesidade Grau 2
+ 40 -> Obesidade Grau 3
*/

#include<stdio.h>
#include<conio.h>

int main (){
	
	float peso, altura, IMC;
	
	printf("Informe o seu peso: ");
	scanf("%f", &peso);
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	IMC = peso / (altura * altura);
	
	printf("\nO seu IMC e %f", IMC);
	
	if ( IMC < 18.5 ) {
		printf("\nVoce esta abaixo do peso");
	} else if ( IMC < 24.9 ) {
		printf("\nSeu peso esta normal");
	} else if ( IMC < 29.9 ) {
		printf("\nVoce esta com sobrepeso - pre-obesidade");
	} else if ( IMC < 34.9 ) {
		printf("\nVoce esta com obesidade Grau 1");
	} else if ( IMC < 39.9 ) {
		printf("\nVoce esta com obesidade Grau 2");
	} else {
	printf("\nVoce esta com obesidade Grau 3");
	}
	
	getch();
}

