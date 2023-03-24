#include<stdio.h>
#include<conio.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media >= 7){
		printf("Parabens! O aluno esta aprovado");
	} else if (media >=5){
		printf("O aluno esta em recuperacao");
	} else {
		printf("O aluno esta reprovado");
	}
	
	getch();
}
