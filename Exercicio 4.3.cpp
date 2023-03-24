/*
3. Programa Real = Calcular a margem de empr�stimo de uma pessoa

Crie um programa para pedir o sal�rio de uma pessoa e depois pedir o valor de cada empr�stimo aberto que essa pessoa tem.
O loop vai ser finalizando quando o valor do empr�stimo for 0.
Devemos calcular o valor de empr�stimo limite, que o banco pode oferecer.

F�RMULA: - Parcelas total de at� 30% do salario bruto

Depois devemos descontar desse valor, o somat�rio dos empr�stimos em aberto e
imprimir quanto de empr�stimo o banco ainda pode oferecer.

Ex.:
R$ 1000 salario bruto
empr�stimo 1 � Parcelas de R$ 10,00
empr�stimo 2 � Parcelas de R$ 22,00
30% de 1000 (salario bruto) = R$ 300,00 de total de empr�stimo
O valor pago de empr�stimo atualmente � 10 + 22 = 32,00
Ent�o ele ainda possui como dispon�vel 300 - 32 = R$ 268,00
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	float salario, somaParcelaEmprestimo = 0, parcelaEmprestimo, limiteEmprestimo, disponivelEmprestimo;
	
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	
	do {
		printf("Informe o valor de um dos seus emprestimos ou 0 quando acabar: ");
		scanf("%f", &parcelaEmprestimo);
		
		somaParcelaEmprestimo += parcelaEmprestimo; 
	} while (parcelaEmprestimo != 0); 
	
	system ("@clear||cls");
	
	limiteEmprestimo = salario * 0.3;
	disponivelEmprestimo = limiteEmprestimo - somaParcelaEmprestimo;
	
	if (disponivelEmprestimo < 0) disponivelEmprestimo = 0;
	
	printf("\n\nEssa pessoa ainda tem disponivel de emprestimo parcelas de ate R$ %.2f", disponivelEmprestimo);
	
	getch();
}
