// Construa um algoritmo que defina e construa uma matriz para armazenar as leituras IUV (Intensidade Ultra Violeta)
// semanais no período de um ano de uma determinada região (considere o ano com 48 semanas). Em seguida calcule e
// armazene a média mensal de cada mês (1, 2, 3, ...., 12) numa outra matriz.

// Ao final, exiba:
// Os valores da 2a. matriz:
// A maior e menor média mensal

#include <stdio.h>

int main(){
	float leituras[48], mediaMensal[12], maior, menor;
	maior = 0;
	menor = 99999;
	
	// Entrada de valores para a primeira matriz
	for(int i = 0; i<=47; i++){
		printf("Digite a leitura da semana %d \n", i + 1);
		scanf("%f", &leituras[i]);
	}
	
	// Calcula as médias mensais e armazena na segunda matriz
	for(int i = 0; i<=11; i++){
		mediaMensal[i] = 0;
		
		for(int j =0; j < 4; j++){
			 int semana = i * 4 + j;  // Calcula o índice correto da semana
            mediaMensal[i] += leituras[semana];			
		}
		
		mediaMensal[i] /= 4;
		
		printf("A média do mês %d foi %f mm \n", i+1, mediaMensal[i]);
		
		if(mediaMensal[i] > maior){
			maior = mediaMensal[i];
		} 
		if(mediaMensal[i] < menor){
			menor = mediaMensal[i];
		}		
	}
	
	printf("A maior média foi %f e a menor foi %f \n", maior, menor);
	
	
}