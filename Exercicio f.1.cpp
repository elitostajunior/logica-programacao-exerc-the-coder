/*
1. Crie um programa para receber uma palavra e informar se ela é um palíndromo.

Palíndromo é um quando uma palavra pode ser lida de trás para frente.

Ex.: Ovo, Ana, Natan
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<strings.h>

int main(){
	
	char texto[50], inverso[50];
	int i, k;
	
	printf("Digite um texto: ");
	gets(texto);
	
	printf("\nO tamanho do texto e: %d", strlen(texto));
	
	k = 0;
	
	for (i = strlen(texto) -1; i >= 0; i--){
	inverso[k] = texto[i];
	k++;
}
	inverso[k] = '\0';
	printf("\n\nO inverso e: %s", inverso);

	if (strcmp (texto, inverso) == 0) {
	printf("\n\nE palindromo");
	} else {
	printf("\n\nNao e palindromo");
	}
	
	getch();
}
