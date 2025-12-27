// Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$500,00. Construa um
// algoritmo que receba o salário do funcionário e mostre o valor do salário reajustado, caso o funcionário tenha direito ao
// aumento.

#include <stdio.h>

int main(){
	float salFunc, salReajuste;
	
	printf("Digite o salário do funcionário: ");
	scanf("%f", &salFunc);
	
	if (salFunc < 500) {
		salReajuste = salFunc * 1.30;
		printf("O salário após o reajuste é %.2f", salReajuste);
		
	} else{
		printf("O funcionário não tem direito ao reajuste.");
		
	}
	
}