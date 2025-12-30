// Um banco concederá um crédito especial aos seus clientes de acordo com o saldo médio no último ano. Construa um
// algoritmo que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. Mostre o
// saldo médio e o valor do crédito.

// SALDO MÉDIO                                                                                       PERCENTUAL
// Abaixo de R$ 2000.00                                                                        10 % do saldo médio
// R$ 2.000,00 até R$ 3.000,00                                                                20 % do saldo médio
// R$ 3.000,00 até R$ 4.000,00                                                                25 % do saldo médio
// Acima de R$ 4.000,00                                                                       30 % do saldo médio

#include <stdio.h>

int main(){
	float saldo, credito;
	
	printf("Qual foi o saldo médio do cliente no ano anterior?");
	scanf("%f", &saldo);
	
	// calculo do crédito de acordo com as condições estabelecidas
	if(saldo < 2000){
		credito = saldo * 0.10;
	} else if(saldo >= 2000 && saldo <= 3000) {
		 credito = saldo * 0.20;
	} else if(saldo > 3000 && saldo <=4000){
		credito = saldo * 0.25;
	} else {
		credito = saldo * 0.30;
	}
	
	// Exibição dos valores
	printf("O saldo médio do cliente foi %.2f e seu crédito concedido será %.2f", saldo, credito);
	
	return 0;
}