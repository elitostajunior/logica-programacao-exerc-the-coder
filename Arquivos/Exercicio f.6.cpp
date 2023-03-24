/*
6. Um posto est� vendendo combust�veis com a seguinte tabela de descontos: 

at� 20 litros - desconto de 5% por litro  �lcool 
acima de 20 litros - desconto de 12% por litro 
at� 20 litros - desconto de 6% por litro Gasolina 
acima de 20 litros - desconto de 15% por litro 

Fa�a um programa que leia o n�mero de litros vendidos e o tipo de combust�vel (A-�lcool, G-gasolina), calcule e imprima o valor a ser pago 
pelo cliente sabendo que o pre�o do litro da gasolina � R$ 5,752 e o pre�o do litro do �lcool � R$ 4,099.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	float desconto, quantLitros, preco, precoFinal, precoNormal;
	char opcaoCombustivel;
	
	printf("Informe o tipo de combustivel a ser abastecido (A - alcool; G - gasolina): ");
	scanf("%c", &opcaoCombustivel);
	
	switch(opcaoCombustivel){
		case 'a':
			case 'A':
			preco = 4.09;
			break;
			case 'g':
				case 'G':
				preco = 5.75;
				break;
				default:
					printf("\nOpcao incorreta");
	}
	
	printf("\nO valor do litro do combustivel e: R$ %.2f", preco);
	
	printf("\n\nInforme quantos litros de combustivel serao abastecidos: ");
	scanf("%f", &quantLitros);
	
	if (quantLitros < 20 && (opcaoCombustivel == 'A' || opcaoCombustivel == 'a')){
		desconto = preco * 0.05;
	} else if (quantLitros >= 20 && (opcaoCombustivel == 'A' || opcaoCombustivel == 'a')){
		desconto = preco * 0.12;
	} else if (quantLitros < 20 && (opcaoCombustivel == 'G' || opcaoCombustivel == 'g')){
		desconto = preco * 0.06;
	} else if (quantLitros >= 20 && (opcaoCombustivel == 'G' || opcaoCombustivel == 'g')){
		desconto = preco * 0.15;
	} else {
		printf("\nOpcao incorreta");
	}
	
	precoNormal = preco * quantLitros;
	
	printf("\nO preco sem desconto do abastecimento e de R$ %.2f", precoNormal);
	
	desconto = desconto * quantLitros;
	
	printf("\nO desconto foi de R$ %.2f", desconto);
	
	precoFinal = (preco * quantLitros) - desconto;
	
	printf("\nO valor a ser pago pelo abastecimento e de R$ %.2f", precoFinal);
		
	getch();
}
