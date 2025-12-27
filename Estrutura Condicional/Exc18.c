// Construa um algoritmo que calcule e exiba o valor da venda de um produto considerando a quantidade vendida do
// produto, o preço de venda do produto e a escolha da condição de pagamento. Utilize os códigos da tabela abaixo para
// identificar qual a condição de pagamento escolhida e, em seguida, efetue o cálculo e a exibição do valor da venda do
// produto.

#include <stdio.h>

int main(){
	int qtdeVendas, condPag;
	float precUnit, valVenda;
	
	printf("Qual a quantidade vendida do produto respectivo?");
	scanf("%d", &qtdeVendas);
	
	printf("Qual o preço unitário do produto?");
	scanf("%f", &precUnit);
	
	valVenda = precUnit * qtdeVendas;
	
	//Condições de pagamento para o usuário
	printf("1 - À vista em dinheiro ou cheque, desconto de 10%% do preço do produto\n");
	printf("2 - No cartão de crédito, desconto de 5%% do preço do produto\n");
	printf("3 - em 2 vezes, preço do produto acrescido de 5%% de juros\n");
	printf("4 - Em 3 vezes, preço do produto acrescido de 10%% de juros\n");
	
	printf("Qual a forma de pagamento desejada?");
	scanf("%d", &condPag);
	
	//Cálculo do valor final da venda com as condições respectivas
	
	if(condPag == 1){
		valVenda *= 0.90;
	} else if (condPag == 2){
		valVenda *= 0.95;
	} else if (condPag == 3){
		valVenda *= 1.05;
	} else if (condPag == 4){
		valVenda *= 1.10;
	} else{
		printf("Condição inválida, tente novamente");
		return 1;
	}
	
	//Exibição ao usuário
	
	printf("O valor da sua compra será %.2f", valVenda);
}