/*
3. Programa Real = Calcular a margem de empréstimo de uma pessoa

Crie um programa para pedir o salário de uma pessoa e depois pedir o valor de cada empréstimo aberto que essa pessoa tem.
O loop vai ser finalizando quando o valor do empréstimo for 0.
Devemos calcular o valor de empréstimo limite, que o banco pode oferecer.

FÓRMULA: - Parcelas total de até 30% do salario bruto

Depois devemos descontar desse valor, o somatório dos empréstimos em aberto e
imprimir quanto de empréstimo o banco ainda pode oferecer.

Ex.:
R$ 1000 salario bruto
empréstimo 1 – Parcelas de R$ 10,00
empréstimo 2 – Parcelas de R$ 22,00
30% de 1000 (salario bruto) = R$ 300,00 de total de empréstimo
O valor pago de empréstimo atualmente é 10 + 22 = 32,00
Então ele ainda possui como disponível 300 - 32 = R$ 268,00
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
