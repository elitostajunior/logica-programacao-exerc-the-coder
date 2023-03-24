/* 1. Criar um programa para ler a base e a altura de um triangulo, informada pelo usuário e calcular a média desse triangulo.
a. Área = base * altura / 2

LER: base, altura, area
PROCESSAMENTO: area = (base * altura) / 2
*/

#include<stdio.h>
int main(){
	
	float base, altura, area;
	
	printf("Informe a base do triangulo: ");
	scanf("%f", &base);
	printf("Informe a altura do triangulo: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("\n\nA area do triangulo e %.1f", area);
	
}

