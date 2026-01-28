// Monte um algoritmo que crie uma matriz chamada TabLetras composta de 50 elementos do tipo caracter, em seguida
// faça a carga da matriz e calcule exiba de quantidade de cada vogal encontrada na matriz TabLetras

#include <stdio.h>

int main(){
	char tabLetras[50];
	int totA, totE, totI, totO, totU;
	totA = 0;
	totE = 0;
	totI = 0;
	totO = 0;
	totU = 0;
	
	for(int i =0; i<50; i++){
		printf("Digite um caracter \n");
		scanf(" %c", &tabLetras[i]);
		
		if(tabLetras[i] == 'a' || tabLetras[i] == 'A'){
			totA +=1;
		}
		if(tabLetras[i] == 'e' || tabLetras[i] == 'E'){
			totE +=1;
		}
		if(tabLetras[i] == 'i' || tabLetras[i] == 'I'){
			totI +=1;
		}
		if(tabLetras[i] == 'o' || tabLetras[i] == 'O'){
			totO +=1;
		}
		if(tabLetras[i] == 'u' || tabLetras[i] == 'U'){
			totU +=1;
		}
	}
	
	printf("O total de cada vogal é: \n");
	printf("A: %d \n", totA);
	printf("E: %d \n", totE);
	printf("I: %d \n", totI);
	printf("O: %d \n", totO);
	printf("U: %d \n", totU);
}