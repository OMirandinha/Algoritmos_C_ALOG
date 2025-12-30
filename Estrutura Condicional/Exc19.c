// A Telefônica deseja fazer o controle das contas telefônicas mensais de seus assinantes através do computador. A
// cobrança de seus serviços é feita a partir do seguinte critério:
// a) Tarifa Básica: - Telefone Residencial: 10,00 - Telefone Comercial : 15,00
// b) Serviço Local - até 90 pulsos : isento - acima de 90 pulsos: 0,05 por pulso excedente
// c) Serviço Interurbano - 0,08 por segundo de ligação
// d) Serviço de Despertador - 2,00 por serviço prestado
// A entrada dos dados é feita através dos seguintes dados para cada assinante:
// - Número do Telefone
// - Tipo do Telefone (1 para residencial e 2 para comercial)
// - Número de pulsos registrados
// - Número total de minutos gastos em ligações interurbanas
// - Número de serviços de despertador prestados
// Escreva um algoritmo que:
// - Faça a entrada de dados do telefone assinante
// - Calcule e exiba o valor da conta do assinante

#include <stdio.h>

int main(){
	int numTel, tipoTel, totPulsos, totMinutos, totServicos;
	float valInicial, valPulso, valInterurbana, valDespertador, valTarifa;
	
	printf("Digite seu número de telefone: ");
	scanf("%d", &numTel);
	
	// Define o valor inicial da tarifa
	printf("Qual o tipo de telefone?\n 1- Residencial \n 2 - Comercial");
	scanf("%d", &tipoTel);
	if(tipoTel == 1){
		valInicial = 10.00;
	} else if(tipoTel == 2){
		valInicial = 15.00;
	} else {
		printf("Opção inválida, tente novamente.");
		return 1;
	}
	
	// Cálculo do valor dos pulsos
	printf("Quantos pulsos foram registrados durante a ligação?");
	scanf("%d", &totPulsos);
	if (totPulsos <= 90){
		valPulso = 0;
	} else{
		valPulso = (totPulsos -= 90) * 0.05;		
	}
	
	// Cálculo do valor por minuto de ligação
	printf("A ligação durou quantos minutos?");
	scanf("%d", &totMinutos);
	valInterurbana = totMinutos * 60 * 0.08;
	
	// Tarifa por serviço
	printf("Quantos serviços foram prestados ao total?");
	scanf("%d", &totServicos);
	valDespertador = totServicos * 2;
	
	// Total da tarifa
	valTarifa = valInicial + valPulso + valInterurbana + valDespertador;
	printf("O valor total da tarifa é %.2f", valTarifa);
	
	
	

}
