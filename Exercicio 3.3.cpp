/*
3. Faça um programa para ler uma letra e informar se é um VOGAL ou CONSOANTE.

*/

#include<stdio.h>
#include<conio.h>

int main (){
	
	char letra;
	
	printf("Insira uma letra do alfabeto: ");
	scanf("%c", &letra);
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
		printf("\nEsta letra e uma VOGAL");
	} else {
		printf("\nEsta letra e uma CONSOANTE");
	}
	
	getch();
}
