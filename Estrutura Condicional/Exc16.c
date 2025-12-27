// Construa um algoritmo que calcule e exiba o valor do Salário Líquido do funcionário de uma empresa. Considere como
// entrada os seguintes dados: Código do Funcionário, Número de Horas Trabalhadas, Valor Hora Trabalhada, Número de
// Horas Extras Tipo 1, Número de Horas Extras Tipo 2. O Salário Líquido do funcionário deve ser calculado de acordo com
// os seguintes critérios:
// • Salário Líquido: Salário Bruto + Extra + Gratificação - Desconto
// • Salário Bruto : Número de Horas Trabalhadas x Valor Hora Trabalhada
// • Gratificação: 7,5% do Salário Bruto
// • Extras = Valor Horas Extras Tipo 1 + Valor Horas Extras Tipo 2
// Onde
// - Valor Horas Extras Tipo 1 = Número de Horas Extras Tipo 1 X Valor Hora Trabalhada acrescida de 15%
// - Valor Horas Extras Tipo 2 = Número de Horas Extras Tipo 2 X Valor Hora Trabalhada acrescida de 25%
// • Desconto: 15% sobre o Salário Bruto

#include <stdio.h>

int main(){
	int codigoFunc, horasTrab, extra1, extra2;
	float salLiquido, valHora, salBruto, grat, valExtra1, valExtra2, desconto;
	
	printf("Digite o código do funcionário");
	scanf("%d", &codigoFunc);
	
	printf("Qual o valor da hora trabalhada?");
	scanf("%f", &valHora);
	
	printf("Qual o total de horas trabalhadas pelo funcionário?");
	scanf("%d", &horasTrab);
	
	// salário bruto + gratificação
	salBruto = valHora * horasTrab;
	grat = salBruto * 0.075;
	
	//Horas extras
	printf("O funcionário tem quantas horas extras do tipo1?");
	scanf("%d", &extra1);
	
	printf("E quantas horas extras do tipo 2?");
	scanf("%d", &extra2);
	
	valExtra1 = (valHora * 1.15) * extra1;
	valExtra2 = (valHora * 1.25) * extra2;
	
	//Desconto
	desconto = salBruto * 0.15;
	
	//Cálculo do salário líquido
	salLiquido = salBruto + valExtra1 + valExtra2 + grat - desconto;
	printf("O salário líquido do funcionário é %.2f", salLiquido);
}