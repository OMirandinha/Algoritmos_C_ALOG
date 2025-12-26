// Construa um algoritmo que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
// Fahrenheit. Considere que: F = 180 x (C + 32) / 100.

#include <stdio.h>

int main() {
	int celsius, fahrenheit;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%i", &celsius);
	
	fahrenheit = 180 * (celsius + 32) / 100;
	
	printf("A temperatura em Fahrenheit é %i", fahrenheit);
	
}