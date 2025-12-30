// O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e com os
// impostos, ambos aplicados ao custo de fábrica. Sabe-se que as porcentagens são as mesmas que estão na tabela a
// seguir. Construa um algoritmo que receba o custo de fábrica de um carro e mostre o custo ao consumidor.



// CUSTO DE FÁBRICA								% DO DISTRIBUIDOR           % DOS IMPOSTOS
// Até R$ 12.000,00            							5%             			Isento
// Entre R$ 12.000,00 e R$ 25.000,00        			10%             		  15%
// Acima de R$ 25.000,00                    			15%             		  20%

#include <stdio.h>

int main(){
	float custoFabrica, taxDistribuidor, impostos, precCarro;
	
	printf("Digite o custo de fábrica do carro: \n");
	scanf("%f", &custoFabrica);
	
	// Calcula a taxa do distribuidor e impostos de acordo com as condições
	if(custoFabrica <= 12000){
		taxDistribuidor = custoFabrica *0.05;
		impostos = 0;
	} else if(custoFabrica > 12000 && custoFabrica <= 25000){
		taxDistribuidor = custoFabrica * 0.10;
		impostos = custoFabrica * 0.15;
	} else {
		taxDistribuidor = custoFabrica * 0.15;
		impostos = custoFabrica * 0.20;
		}
		
	// Calcula o preço final do carro e exibe ao usuário
		precCarro = custoFabrica + taxDistribuidor + impostos;
		printf("O preço da venda do carro será %.2f", precCarro);
	
	return 0;
}