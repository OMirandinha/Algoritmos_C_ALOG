// Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Construa um algoritmo que receba o
// salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do funcionário.

#include <stdio.h>

int main(){
	float salFunc, valVenda, comissao, salFinal;
	
	printf("Digite o salário fixo do funcionário respectivo: ");
	scanf("%f", &salFunc);
	
	printf("Qual o valor das vendas realizadas?");
	scanf("%f", &valVenda);
	
	comissao = valVenda * 0.04;
	
	printf("A comissão da venda foi:\n ");
	printf("%.2f", comissao);
	
	salFinal = salFunc + comissao;
	
	printf("O salário do funcionário com  o valor da comissão é:\n ");
	printf("%.2f", salFinal);
	
}