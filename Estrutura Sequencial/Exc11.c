// Construa um algoritmo que receba a quantidade em dinheiro em reais que uma pessoa que vai viajar possui.
// Essa pessoa vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina.
// Sabe-se que a cotação do dólar é de R$ 1,80, do marco alemão é de R$ 2,00 e da libra esterlina é de R$ 2,15. O programa
// deve fazer as conversões e mostrá-las.

#include <stdio.h>

int main() {
	float qtdeReais, totDol, totDeutsch, totLibra;
	
	printf("Qual a quantidade de dinheiro em reais? ");
	scanf("%f", &qtdeReais);
	
	totDol = qtdeReais / 1.80;
	totDeutsch = qtdeReais / 2;
	totLibra = qtdeReais / 2.15;
	
	printf("Seu total em Dólares é: %.2f\n", totDol);
	printf("Seu total em marco alemão é: %.2f\n", totDeutsch);
	printf("Seu total em libra esterlina é: %.2f\n", totLibra);
	
}