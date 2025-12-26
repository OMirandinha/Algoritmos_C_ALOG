// João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como as contas estão atrasadas, João
// terá que pagar multa de 2% sobre cada conta. Construa um algoritmo que calcule e mostre quanto restará do salário do
// João.

#include <stdio.h>

int main(){
	float salJoao, valConta1, valConta2, restoSal;
	
	printf("Qual o salário de João?");
	scanf("%f", &salJoao);
	
	printf("Qual o valor das contas? ");
	scanf("%f", &valConta1);
	scanf("%f", & valConta2);
	
	restoSal = salJoao - (valConta1 + valConta2) * 1.02;
	
	printf("Restará %f do salário de João", restoSal);
	
}