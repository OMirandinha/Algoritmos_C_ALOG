// Construa um algoritmo que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas
// extras trabalhadas. Calcule e mostre o salário a receber seguindo as regras:
// · a hora trabalhada vale 1/8 do salário mínimo;
// · a hora extra vale 1⁄4 do salário mínimo;
// · o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
// · a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora
// extra;
// · o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras

#include <stdio.h>

int main(){
	int horasTrab, horaExtra;
	float salMinimo, valHora, valHoraExtra, salBruto, salFunc;
	
	printf("Qual o valor do salário mínimo atualmente?");
	scanf("%f", &salMinimo);
	
	printf("Qual o total de horas trabalhadas pelo funcionário?");
	scanf("%d", &horasTrab);
	
	printf("Quantas horas extras foram registradas?");
	scanf("%d", &horaExtra);
	
	valHora = salMinimo / 8;
	valHoraExtra = (salMinimo /4) * horaExtra;
	salBruto = valHora * horasTrab;
	
	salFunc = salBruto + valHoraExtra;
	
	printf("O salário final do funcionário será %.2f", salFunc);
	
	
}