// Construa um algoritmo que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o valor do
// aumento e o novo salário.

// SALÁRIO 						  PERCENTUAL DE AUMENTO
// Até R$ 3.000,00 						   15%
// R$ 3.000,00 a R$ 6.000,00 			   10%
// R$ 6.000,00 a R$ 9.000,00 			    5%
// Acima de R$ 9.000,00  					0%



#include <stdio.h>

int main(){
	float salFunc, aumento, novoSal;
	
	printf("Digite o salário atual do funcionário: \n");
	scanf("%f", &salFunc);
	
	//Calcula o aumento de acordo com as condições estabelecidas
	if(salFunc < 3000){
		aumento = salFunc * 0.15;
	} else if(salFunc >= 3000 && salFunc < 6000){
		aumento = salFunc * 0.10;
	} else if(salFunc >= 6000 && salFunc < 9000){
		aumento = salFunc * 0.05;
	} else {
		aumento = 0;
	}
	
	//Calcula o novo salário
	novoSal = salFunc + aumento;
	
	//Exibe as informações ao usuário
	if (aumento > 0){
		printf("O funcionário teve um aumento de %.2f, sendo seu novo salário %.2f", aumento, novoSal);
	} else {
		printf("O funcionário não obteve aumento salarial");
	}
	return 0;

}