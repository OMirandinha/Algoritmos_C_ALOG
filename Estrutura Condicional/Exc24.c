// Construa um algoritmo que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o valor a
// receber. Sabe-se que este é composto pelo salário do funcionário acrescido de gratificação e descontado o imposto de 7%
// sobre o salário sem gratificação.

// TABELA DAS GRATIFICAÇÕES

// SALÁRIO					GRATIFICAÇÃO
// Até R$ 450,00			 R$ 100,00
// R$ 450,00				 R$ 75,00
// R$ 700,00				 R$ 50,00
// Acima de R$ 1000,00		 R$ 35,00

#include <stdio.h>

int main(){
	float salFunc, grat, taxaImposto, salFinal;
	
	printf("Digite o salário atual do funcionário: ");
	scanf("%f", &salFunc);
	
	// Calcula o desconto do imposto de acordo com o salário base
	taxaImposto = salFunc * 0.07;
	
	// Calcula a gratificação do funcionário com base na tabela acima
	if(salFunc < 450) {
		grat = 100;
	} else if(salFunc >=450 && salFunc <= 700){
		grat = 75;
	} else if(salFunc > 700 && salFunc <= 1000){
		grat = 50;
	} else{
		grat = 35;
	}
	
	// Calcula o novo salário do funcionário
	salFinal = salFunc + grat - taxaImposto;
	
	printf("O novo salário do funcionário será: %.2f", salFinal);

}