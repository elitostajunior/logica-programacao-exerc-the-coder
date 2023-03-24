/*
7. Uma empresa quer verificar se um funcion�rio est� pronto para a aposentadoria ou n�o. Para ele estar pronto para a aposentadoria ele deve seguir alguns dos requisitos abaixo: 

- Ter no m�nimo 65 anos de idade. 
- Ter trabalhado no m�nimo 30 anos. 
- Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos. 

Com base nessas informa��es, fa�a um programa que leia o c�digo do empregado, o ano de seu nascimento e o ano de seu ingresso na empresa. 
O programa dever� escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'N�o requerer'. 

* Criar uma vari�vel para considerar o ano atual.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int codigo, idade, tempoTrabalho, anoNascimento, anoIngresso, anoAtual;
	
	printf("Insira seu codigo: ");
	scanf("%d", &codigo);
	printf("Informe o ano do seu nascimento: ");
	scanf("%d", &anoNascimento);
	printf("Informe o ano de seu ingresso na empresa: ");
	scanf("%d", &anoIngresso);
	
	system("@clear||cls");
	
	anoAtual = 2021;
	
	tempoTrabalho = anoAtual - anoIngresso;
	
	idade = anoAtual - anoNascimento;
	
	printf("Seu codigo do funcionario: %d", codigo);
	printf("\nAno de nascimento: %d", anoNascimento);
	printf("\nSua idade: %d", idade);
	printf("\nAno de ingresso na empresa: %d", anoIngresso);
	printf("\nSeu tempo de trabalho: %d", tempoTrabalho);
	
	if ((idade >= 65 || tempoTrabalho >= 30) || (idade >= 60 && tempoTrabalho >= 25)){
		printf("\n\nIdade e/ou tempo de trabalho suficientes para requerer aposentadoria");
	} else {
		printf("\n\nSua idade e/ou tempo de trabalho ainda NAO sao suficientes para requerer aposentadoria");
	}
	
	getch();
}
