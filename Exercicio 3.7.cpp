/*
7. Criar um programa que leia o um número inteiro entre 1 e 7 e escreva o dia da semana correspondente. Caso o usuário digite um número fora desse intervalo,
imprimir mensagem que não existe dia da semana com esse número.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int opcao;
	
	printf("Insira um numero de 1 a 7 para descobrir o dia da semana: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("\n\nO dia da semana e SEGUNDA-FEIRA");
			break;
			case 2:
				printf("\n\nO dia da semana e TERCA-FEIRA");
				break;
				case 3:
					printf("\n\nO dia da semana e QUARTA-FEIRA");
					break;
					case 4:
						printf("\n\nO dia da semana e QUINTA-FEIRA");
						break;
						case 5:
							printf("\n\nO dia da semana e SEXTA-FEIRA");
							break;
							case 6:
								printf("\n\nO dia da semana e SABADO");
								break;
								case 7:
									printf("\n\nO dia da semana e DOMINGO");
									break;
									default:
										printf("\n\nOpcao invalida");
	}
	
	getch();
}


