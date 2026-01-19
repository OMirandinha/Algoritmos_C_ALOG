// Construa um algoritmo para calcular e exibir o valor a ser pago pelo período de estacionamento de um carro. Considere
// como entrada de dados: número da placa do carro, horário de entrada (no formato hhmm) e o horário de saída (no formato
// hhmm). Sabe-se que o estacionamento cobra R$ 1,50 a cada intervalo completo de 15 minutos. Por exemplo, se um carro
// ficar estacionado por 1 hora e 20 minutos pagará R$ 7,50 (R$ 6,00 pela hora e R$ 1,50 pelos vinte minutos). O
// processamento deve ser finalizado quando informado 0 (zero) para o número da placa do carro. Ao final do processamento
// deve ser exibido o faturamento do estacionamento que representa a somatória dos valores pagos pela utilização do
// estacionamento.
// Para realizar a entrada de dados para testar o algoritmo considere que:
// • o período de funcionamento do estacionamento é das 7:00 até 18:00.
// • o horário de entrada é menor que o horário de saída.

#include <stdio.h>

int main(){
	int numPlaca, entrada, saida, permanencia, horas, minutos;
	float valHoras, valMinutos, valPagar, faturaTotal;
	
	numPlaca = 1;
	faturaTotal = 0;
	
	while(numPlaca !=0){
		printf("Digite o número da placa do carro: \n");
		scanf("%d", &numPlaca);
		
		// Encerra o loop se o número da placa for igual a 0
		if(numPlaca == 0){
			break;
		}
		
		printf("Digite o horário de entrada no estacionamento(HHMM)\n");
		scanf("%d", &entrada);
		
		printf("Digite o horário de saída do estacionamento: \n");
		scanf("%d", &saida);
		
		// Encerra o loop se o horário de entrada for maior que o de saída ou vice-versa
		if(entrada > saida || saida < entrada){
			printf("Horários inválido, tente novamente.");
			break;
		}
		
		// Calcula o tempo total em que o veículo ficou estacionado
		permanencia = saida - entrada;
		
		// Calcula as horas e minutos separadamente
		horas = permanencia / 100;
		minutos = permanencia % 100;
		
		// Calcula o valor referente as horas e minutos
		valHoras = horas * 6;
		valMinutos = (minutos / 15) * 1.50;
		
		valPagar = valHoras + valMinutos;
		faturaTotal += valPagar;
		
		printf("O valor a ser pago pela placa %d é %.2f\n", numPlaca, valPagar);
	
		continue;
		
		
	}
	
	printf("O faturamento total do estacionamento até então é %.2f", faturaTotal);
	
	return 0;
}