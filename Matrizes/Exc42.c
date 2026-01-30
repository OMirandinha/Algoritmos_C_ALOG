// A partir da matriz numérica real representada abaixo, construa um algoritmo:
// Que faça a criação da matriz e faça a entrada de dados
// Faça o cálculo e a exibição da somatória dos valores armazenados nos elementos marcados em cinza

#include <stdio.h>

int main(){
	float matNum[10][10], somatoria;
	somatoria = 0;
	
	// Loops para realizar a entrada de dados na matriz 
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			printf("Digite o valor a ser armazenado na linha %d coluna %d \n", i+1, j+1);
			scanf("%f", &matNum[i][j]);
		}
	}
	
	// Efetua o cálculo da somatória dos valores respectivos
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			if(i <= 3 || i >=7){
				if(j >=4 && j <=7){
					somatoria += matNum[i][j];
				}
			}
		}
	}
	
	printf("A somatória dos valores em cinza é %.2f \n", somatoria);
	
	return 0;
	
}