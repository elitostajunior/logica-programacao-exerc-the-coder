#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int num[5] = {10, 50, 22, 18, 7};
	int valorTemp;
	
	for (int i = 0; i < 5; i++){
		for (int k = (i + 1); k < 5; k++){
			if(num[i] > num[k]){
				valorTemp = num[i];
				num[i] = num[k];
				num[k] = valorTemp;
			}
		}
	}
	
	for (int i = 0; i < 5; i++){
		printf("\nValor: %d", num[i]);
	}
	
	getch();
}
