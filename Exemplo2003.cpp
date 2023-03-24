#include<stdio.h>
#include<conio.h>
int main (){
	
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	printf("A idade informada foi de %d anos", idade);
	
	if (idade >= 18) {
		printf("\nO usuario e MAIOR de idade");
	} else {
		printf("\nDesculpe, o usuario NAO e maior de idade");
	}
	getch();
}
