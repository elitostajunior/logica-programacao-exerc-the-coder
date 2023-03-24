/*
7. Uma empresa quer verificar se um funcionário está pronto para a aposentadoria ou não. Para ele estar pronto para a aposentadoria ele deve seguir alguns dos requisitos abaixo: 

- Ter no mínimo 65 anos de idade. 
- Ter trabalhado no mínimo 30 anos. 
- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. 

Com base nessas informações, faça um programa que leia o código do empregado, o ano de seu nascimento e o ano de seu ingresso na empresa. 
O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'. 

* Criar uma variável para considerar o ano atual.
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
