// Um determinado material radioativo perde metade da sua massa a cada 50 segundos. Dada a massa inicial, em
// quilogramas, construa um algoritmo que calcule e exiba um número inteiro que representa o tempo necessário, expresso
// no formato mmss (mm-minuto, ss-segundo), para que a respectiva massa fique inferior a 0,5 gramas.

#include <stdio.h>

int main(){
	int tempoTotal, minutos, segundos;
	float massaInicial;
	
	tempoTotal = 0;
	
	printf("Digite a massa inicial do material radioativo: \n");
	scanf("%f", &massaInicial);
	massaInicial *= 1000;
	
	// Loop para dividir a massa por sua metade até chegar a um valor inferior a 0,5
	while(massaInicial >= 0.5){
		massaInicial /= 2;
		tempoTotal += 50;
	}
	
	
	minutos = tempoTotal / 60;
	segundos = tempoTotal % 60;
	
	printf("O tempo total para a massa ficar inferior a 0,5 gramas é %d minutos e %d segundos \n", minutos, segundos);
	
	return 0;
	
	
}