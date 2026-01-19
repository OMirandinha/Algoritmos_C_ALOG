// O cálculo do frete para a remessa de uma mercadoria obedece às seguintes especificações:

// • entregas por via aérea: a tarifa básica é de R$ 10,50 por kg, adicionando na tarifa básica R$ 2,50 para cada quilo
// excedente quando o peso da entrega for superior a 25 kg.
// • entregas via terrestre: O cálculo do frete é feito a partir da tabela abaixo:
// Construa um algoritmo que calcule e exiba o valor do frete para o envio de uma determinada mercadoria.

// Inferior a 50 Km: R$ 3,50 por quilo

// De 50 Km até 150 Km: R$ 4,50 por quilo

// Acima de 150 Km: R$ 6,00 por quilo

#include <stdio.h>

int main(){
	int tipoEntrega, quilos, pesoExcedente, km;
	float tarifa;
	
	printf("Qual tipo de entrega gostaria de contratar? \n");
	printf("1 - Via aerea\n");
	printf("2 - Via Terrestre\n");
	scanf("%d", &tipoEntrega);
	
	// VERIFICAÇÃO IMEDIATA - ENCERRA SE FOR DIFERENTE DE 1 OU 2
	if(tipoEntrega != 1 && tipoEntrega != 2){
		printf("Opcao invalida, tente novamente \n");
		return 1;
	}
	
	printf("Qual o peso total da entrega? \n");
	scanf("%d", &quilos);
	
	if(tipoEntrega == 1){
		if(quilos > 25){
			pesoExcedente = quilos - 25;
			tarifa = (25 * 10.50) + (pesoExcedente * 13);
		} else{
			tarifa = quilos * 10.50;
		}

	}else if(tipoEntrega == 2){
		printf("Qual a distancia total a ser percorrida? \n");
		scanf("%d", &km);
		
		if(km < 50){
			tarifa = 3.50 * quilos;
		} else if (km >=50 && km <= 150){
			tarifa = 4.50 * quilos;
		} else{
			tarifa = 6 * quilos;
		}
	}
	
	printf("O preco total da entrega sera %.2f \n", tarifa);
	
	return 0;
}