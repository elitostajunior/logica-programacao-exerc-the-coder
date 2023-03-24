/*
3. Crie um programa para ler 5 números em um vetor. Depois da leitura o programa deve imprimir apenas os números primos desse vetor.

OBS: Número primo é o número que é divisível apenas por 1 e por ELE MESMO.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

bool isPrimo(int numero){
	bool numeroEPrimo = false;
	int totalDivisao = 0;
	for(int i = 1; i <= numero; i++){
		int restoDivisao = numero % i;
		if (restoDivisao == 0){
			totalDivisao++;
		}
			/*printf("\n%d e divisivel por %d", numero, i);
		} else {
			printf("\n%d nao e divisivel por %d", numero, i);
		}*/	
	}
	if (totalDivisao <= 2){
		numeroEPrimo = true;
	}
	/*printf("\nO %d foi divisivel %d vezes", numero, totalDivisao);*/
	
	return numeroEPrimo;	
}

int main(){
	
/*	if (isPrimo(6)){
		printf("E numero primo");
	} else {
		printf("Nao e numero primo");
	}*/
	
	int numeros[5];
	
	for(int i = 0; i < 5; i++){
		printf("Informe um numero: ");
		scanf("%d", &numeros[i]);
	}
	
	int i = 0;
	while (i < 5){
		if (isPrimo (numeros[i])){
			printf("\nO numero %d e PRIMO", numeros[i]);
		}
		i++;
	}
	
	getch();
}
