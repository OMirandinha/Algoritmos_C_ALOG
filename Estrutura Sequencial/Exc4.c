// Construa uma aplicação que calcule e exiba o valor a ser pago por uma duplicata em atraso de acordo com uma taxa
// de juros diária calculada sobre o valor da duplicada. Considere como entrada, os seguintes dados: Numero da Duplicata,
// Valor da Duplicata, Número de Dias em Atraso, Taxa de Juros Diária em porcentagem (%).

#include <stdio.h>

int main(){
	int numDuplicata, diasAtraso;
	float valDuplicata, taxaJuros, valPagar;
	
	printf("Digite o número da duplicata: ");
	scanf("%i", &numDuplicata);
	
	printf("Digite o valor da duplicata: ");
	scanf("%f", & valDuplicata);
	
	printf("Está atrasado por quantos dias? ");
	scanf("%i", &diasAtraso);
	
	printf("Qual a taxa de juros? ");
	scanf("%f", &taxaJuros);
	
	valPagar = (valDuplicata * diasAtraso * (taxaJuros/100)) + valDuplicata;
	
	printf("O valor a ser pago após reajustes de atraso é: ");
	printf("%.2f", valPagar);
	
	
}