// Construa um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a
// quantidade de salários mínimos que ganha esse funcionário.

#include <stdio.h>

int main(){
	float salMinimo, salFunc;
	int qtdeSal;
	
	printf("Digite o valor do salário mínimo atualmente: ");
	scanf("%f", &salMinimo);
	
	printf("Digite o salário do funcionário respectivo: ");
	scanf("%f", &salFunc);
	
	qtdeSal = salFunc / salMinimo;
	
	printf("O funcionário recebe %i salários mínimos.\n", qtdeSal);
	
}