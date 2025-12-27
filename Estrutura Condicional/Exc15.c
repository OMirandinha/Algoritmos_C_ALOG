// Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Construa um algoritmo que
// receba o tipo de investimento e o valor do investimento e que calcule e mostre o valor corrigido de acordo com o tipo de
// investimento.

#include <stdio.h>

int main(){
	int tipoInvest;
	float valInvest, valReajuste;
	
	printf("Qual o valor investido?");
	scanf("%f", &valInvest);
	
	printf("Qual o tipo do investimento?");
	scanf("%d", &tipoInvest);
	
	if (tipoInvest == 1){
		valReajuste = valInvest * 1.03;		
	}else if (tipoInvest == 2){
		valReajuste = valInvest * 1.04;
	} 
	
	else {
		printf("tipo de investimento inválido");
	}
	
	printf("O valor final do investimento será: %.2f", valReajuste);
	
}