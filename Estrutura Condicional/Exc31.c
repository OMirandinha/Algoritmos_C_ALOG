// Uma empresa trabalha com 4 tipos de produtos: Areia, Pedrita, Saibro, Brita. Cada produto apresenta três tipos de composição (Fina, Média, Grossa). O preço de cada produto nas suas respectivas composições está descrito na tabela abaixo:

// Produto			Preço Tipo Fina		Preço Tipo Média	Preço Tipo Grossa
// Areia			R$ 34,00		15% a mais da Fina		25% a mais da Fina
// Pedrita			R$ 42,50		15% a mais da Fina		25% a mais da Fina
// Brita			R$ 28,00		15% a mais da Fina		25% a mais da Fina
// Saibro			R$ 27,00		15% a mais da Fina		25% a mais da Fina

// Construa um algoritmo que a partir do tipo do produto, da sua composição e da quantidade vendida (em metros cúbicos) calcule e exiba o Preço Final do Produto e o Valor da Venda. Caso o valor da venda seja inferior a R$ 750,00 acrescente uma taxa de frete de R$ 45,00 no Valor da Venda.

// Exemplos:

// Entrada			A	F				34
// Saída			34,00	1156,00	
// Entrada			A	f				8,5
// Saída			34,00	334,00	
// Entrada			B	M				20
// Saída			32,20	689,00	
// Entrada			s	g				23,5
// Saída			33,75	793,13	

#include <stdio.h>

int main(){
	char prod, tipo;
	float precUnit, qtdeMetros, valVenda;
	int frete;
	
	frete = 0;
	
	printf("Qual produto deseja comprar? (A/P/B/S)\n");
	scanf(" %c", &prod);
	
	// Define o preço unitário do produto de acordo com tipo fina, desta forma podemos calcular o preço dos outros tipos de forma mais eficaz
	if(prod == 'A' || prod == 'a'){
		precUnit = 34;
	} else if(prod == 'P' || prod == 'p'){
		precUnit = 42.50;
	} else if(prod == 'B' || prod == 'b'){
		precUnit = 28;
	} else if(prod == 'S' || prod == 's'){
		precUnit = 27;
	} else {
		printf("Opção inválida tente novamente\n");
		return 1;
	}
	
	printf("Qual o tipo de composição desejada? (F/M/G)");
	scanf(" %c", &tipo);
	
	// Calcula o preço unitário dos tipos Médio e Grosso
	if(tipo == 'M' || tipo == 'm'){
		precUnit *= 1.15; 
	} else if(tipo == 'G' || tipo == 'g'){
		precUnit *=1.25;
	} else if(tipo == 'F' || tipo == 'f'){
			precUnit = precUnit;
	}else {
		printf("Tipo inválido, tente novamente\n");
		return 1;
	}
	
	printf("Para quantos metros cúbicos será necessário o material?\n");
	scanf("%f", &qtdeMetros);
	
	valVenda = precUnit * qtdeMetros;
	
	// Define se haverá acréscimo de frete
	if(valVenda < 750){
		frete = 45;
		valVenda += frete;
	}
	
	printf("O preço final da unidade será %.2f \n", precUnit);
	printf("O valor da venda será %.2f \n", valVenda);
	
	
	return 0;
}