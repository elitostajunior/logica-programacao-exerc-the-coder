/*
4. Crie um programa para armazenar em um vetor o voto de 15 pessoas de uma escola, o vetor deve armazenar o número do candidato. Ao término, o programa deve
percorrer o vetor e imprimir em relação aos votos válidos (votos que foram em um dos candidatos) a porcentagem de cada um nessa votação.

Os números dos candidatos são:
Cand 1 – 12345
Cand 2 – 44848
Cand 3 – 78001
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	const int NUM_VOTANTES = 5;
	int votos[NUM_VOTANTES];
	int candidatos[3][2] = {
	{12345, 0},
	{44848, 0},
	{78001, 0}
};
int totalVotosValidos = 0;
	
	int i = 0;
	while(i < NUM_VOTANTES){
		printf("Informe o seu voto: ");
		scanf("%d", &votos[i]);
		i++;
		system("@clear||cls");
	}
	
	printf("\n########## CALCULANDO RESULTADO ##########");
	
	i = 0;
	while(i < NUM_VOTANTES){
		int votoAtual = votos[i];
		for(int k = 0; k < 3; k++){
			int numCandidato = candidatos[k][0];
			if(numCandidato == votoAtual){
				candidatos[k][1]++; // soma dos votos de cada um dos candidatos
				totalVotosValidos++; // total de votos validos
				break;
			}
		}
		i++;
	}
	
	printf("\n########## RESULTADO ##########");
	
	for (int i = 0; i < 3; i++){
		int numCandidato = candidatos[i][0];
		int numVotos = candidatos[i][1];
		float porcVotos = (float) numVotos / totalVotosValidos;
		printf("\nO candidato %d teve %d votos = %.2f porcento", numCandidato, numVotos, porcVotos);
	}
	
	getch();
}
