// Construa um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// · a idade dessa pessoa em anos;
// · a idade dessa pessoa em meses;
// · a idade dessa pessoa em dias;
// · a idade dessa pessoa em semanas.

#include <stdio.h>

int main(){
	int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeSemanas, idadeDias;
	
	printf("Qual seu ano de nascimento?");
	scanf("%i", &anoNasc);
	
	printf("Qual é o ano ataul?");
	scanf("%i", &anoAtual);
	
	idadeAnos = anoAtual - anoNasc;
	idadeMeses = idadeAnos * 12;
	idadeSemanas = idadeMeses * 4;
	idadeDias = idadeSemanas * 7;
	
	printf("sua idade em anos é %i\n", idadeAnos);
	printf("Sua idade em meses é %i\n", idadeMeses);
	printf("Sua idade em semanas é %i\n", idadeSemanas);
	printf("Sua idade em dias é %i\n", idadeDias);
	
}