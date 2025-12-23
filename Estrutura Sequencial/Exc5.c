// Construa um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

#include <stdio.h>

int main(){
	float pesoKG, pesoG;
	
	printf("Digite seu peso em quilos: ");
	scanf("%f", &pesoKG);
	
	pesoG = pesoKG * 1000;
	
	printf("seu peso em gramas é: ");
	printf("%.2f", pesoG);
	
}