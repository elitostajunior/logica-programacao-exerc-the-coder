/*
1. Crie um programa para ler N idades. O sistema deve parar de ler as idades, quando o valor for menor ou igual a 0. Ao término deve imprimir a soma das idades, a maior
idade, a menor idade e a média das idades.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int idade, somaIdade = 0, maiorIdade = 0, menorIdade = 0, mediaIdade, numeroIdade = 0;
	
	do {
		printf("Informe uma idade ou 0 para sair: ");
		scanf("%d", &idade);
		
		if (idade > 0){
			somaIdade += idade;
			
			if (maiorIdade < idade)
			maiorIdade = idade;
			
			if (menorIdade > idade || menorIdade == 0)
			menorIdade = idade;
			
			numeroIdade++;
		}
		
	} while (idade > 0);
	
	mediaIdade = somaIdade / numeroIdade;
	
	printf("\nFIM DO PROGRAMA ##########");
	printf("\nSoma das idades: %d", somaIdade);
	printf("\nMaior idade: %d", maiorIdade);
	printf("\nMenor idade: %d", menorIdade);
	printf("\nMedia das idades: %d", mediaIdade);
	
	getch();
}
