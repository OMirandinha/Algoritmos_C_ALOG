// Construa um algoritmo que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo
// preço e a classificação.

// TABELA 1 – PERCENTUAL DE AUMENTO

// PREÇO										%
// Até R$ 500,00								5
// Entre R$ 500,00 e R$ 1.000,00				10
// Acima de R$ 1.000,00						    15

// TABELA 2 – CLASSIFICAÇÕES

// NOVO PREÇO											CLASSIFICAÇÃO
// Até R$ 800,00										  Barato
// Entre R$ 800,00 e R$ 1.200,00 (inclusive)			  Normal
// Entre R$ 1.200,00 e R$ 2.000,00 (inclusive)			   Caro
// Maior que R$ 2.000,00								Muito caro

#include <stdio.h>

int main(){
	float precProduto, precNovo;
	const char *classe;
	
	printf("Digite o preço do produto: ");
	scanf("%f", &precProduto);
	
	// Calcula o aumento do preço do produto de acordo com o percentual estipulado na tabela 1
	if(precProduto <= 500){
		precNovo = precProduto * 1.05;
	} else if(precProduto > 500 && precProduto <= 1000){
		precNovo = precProduto * 1.10;
	} else{
		precNovo = precProduto * 1.15;
	}
	
	// Define a classificação do produto de acordo com a tabela 2
	if(precNovo <= 800){
		classe = "Barato";
	} else if(precNovo > 800 && precNovo <= 1200){
		classe = "Normal";
	} else if(precNovo > 1200 && precNovo <=2000){
		classe = "Caro";
	} else{
		classe = "Muito caro";
	}
	
	// Exibe o novo preço e classificação ao usuário
	printf("O novo preço do produto será %.2f sendo classificado como %s", precNovo, classe);

}