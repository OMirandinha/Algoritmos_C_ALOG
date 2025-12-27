// Uma loja vende bicicletas com um acréscimo de 50% sobre o preço de custo. A loja paga a cada
// vendedor 2 salários mínimos por mês mais uma comissão de 15% sobre o preço de custo de cada bicicleta
// vendida, dividida igualmente entre eles. Construa um algoritmo que a partir do número de empregados da
// loja, do valor do salário mínimo, do preço de custo da bicicleta e o número de bicicletas vendidas no mês,
// calcule e exiba:
// • O total recebido por cada empregado
// • lucro líquido da loja Considere que todas as bicicletas tem o mesmo preço de custo.

#include <stdio.h>

int main(){
	int totFunc, vendasMes;
	float salMinimo, precBicicleta, valVenda, salFunc, lucro;
	
	printf("Qual o total de funcionários da loja?");
	scanf("%d", &totFunc);
	
	printf("Qual o custo de cada bicicleta?");
	scanf("%f", &precBicicleta);
	
	printf("Quantas bicicletas foram vendidas no mês?");
	scanf("%d", &vendasMes);
	
	printf("Qual o valor do salário mínimo?");
	scanf("%f", &salMinimo);
	
	//Valor da venda com acréscimo;
	valVenda = precBicicleta * 1.50;
	
	//Salário de cada funcionáro
	salFunc = (salMinimo * 2) + (precBicicleta * 0.15 * vendasMes / totFunc);
	
	//Cálculo do lucro da loja
	lucro = (valVenda * vendasMes) - (salFunc * totFunc) - (precBicicleta * vendasMes);
	
	printf("Cada funcoionário recebe %.2f\n", salFunc);
	printf("O lucro da loja é %.2f\n", lucro);
}