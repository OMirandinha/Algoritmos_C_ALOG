// Construa um algoritmo que tenha como entrada de dados a quantidade de dias que uma pessoa ficou hospedada em
// um hotel e o valor da diária. Em seguida calcule e exiba o valor a ser pago pela hospedagem.

#include <stdio.h>
int main(){
	
	int dias;
	float valDiaria, valTotal;

	printf("Quantos dias ficou hospedado no hotel? ");
	scanf("%i", &dias);

	printf("Qual o valor pago pela diária? ");
	scanf("%f", &valDiaria);

	valTotal = valDiaria * dias;

	printf("O valor total a ser pago pela sua estadia é: ");
	printf("%.2f", valTotal);
}