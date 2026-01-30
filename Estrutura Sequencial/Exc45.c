// Construa um algoritmo que leia o horário de entrada (hhmm) e o horário de saída (hhmm) de um empregado. Em
// seguida calcule e exiba quanto tempo (hhmm) o empregado ficou na empresa.
// Exemplo: Entrada: 830 | 1410 Saída: 540

#include <stdio.h>

int main(){
	int entrada, saida, horaEntrada, horaSaida, minutosEntrada, minutosSaida, horasTotal, minutosTotal, tempoPermanencia;
	
	printf("Digite o horário de entrada do funcionário (HHMM) \n");
	scanf("%d", &entrada);
	
	printf("Digite o horário de saída do funcionário \n");
	scanf("%d", &saida);
	
	horaEntrada = entrada / 100;
	horaSaida = saida / 100;
	minutosEntrada = entrada % 100;
	minutosSaida = saida % 100;
	
	horasTotal = horaSaida * 60 + minutosSaida;
	minutosTotal = horaEntrada * 60 + minutosEntrada;
	
	tempoPermanencia = horasTotal - minutosTotal;
	
	printf("%d%d", tempoPermanencia / 60, tempoPermanencia % 60);
	
	return 0;
}
