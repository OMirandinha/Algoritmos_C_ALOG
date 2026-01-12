// Um prédio possui três elevadores denominados de A, B e C. Para otimizar o sistema de controle dos elevadores, foi
// realizado um levantamento onde cada usuário responda:
// - o elevador (A, B ou C) que utilizava com mais frequência.
// - o período (M-Matutino, V-Vespertino e N-Noturno) que ele utilizava o elevador.
// Desenvolva um algoritmo que calcule e exiba:
// - qual o elevador mais utilizado e em que período se concentra o maior fluxo de pessoas.
// - qual o período mais usado de todos e a qual elevador mais utilizado neste período.
// Considere como finalizador de entrada de dados o valor ‘*’ para a entrada correspondente ao elevador.

#include <stdio.h>

int main(){
	char elevador, periodo, executar;
	int totA = 0, totB = 0, totC = 0, totM = 0, totV = 0, totN = 0;
	
	// Matriz para armazenar combinações elevador-período
	// índices: elevadores [0=A, 1=B, 2=C], períodos [0=M, 1=N, 2=V]
	int combinacoes[3][3] = {0};
	
	// Variáveis para armazenar índices temporários
	int indice_elevador, indice_periodo;
	
	printf("Deseja iniciar a pesquisa? (* para finalizar)\n");
	scanf(" %c", &executar);
	
	// Loop while para reiniciar o programa enquanto o input for diferente de '*'
	while (executar != '*'){
		printf("Qual elevador você utiliza com mais frequência? (A, B ou C)\n");
		scanf(" %c", &elevador);
		
		// Incrementa a variável do elevador respectivo
		if(elevador == 'a' || elevador == 'A'){
			totA += 1;
			indice_elevador = 0;
		} else if(elevador == 'b' || elevador == 'B'){
			totB += 1;
			indice_elevador = 1;
		} else if(elevador == 'c' || elevador == 'C'){
			totC += 1;
			indice_elevador = 2;
		} else{
			printf("Opção inválida, tente novamente.");
			return 1;
		}
		
		printf("Durante qual período do dia você mais utiliza os elevadores? (M, N ou V)\n");
		scanf(" %c", &periodo);
		
		// realiza a incrementação para as variáveis de período 
		if(periodo == 'M' || periodo == 'm'){
			totM += 1;
			indice_periodo = 0;
		} else if(periodo == 'N' || periodo == 'n'){
			totN += 1;
			indice_periodo = 1;
		} else if(periodo == 'V' || periodo == 'v'){
			totV += 1;
			indice_periodo = 2;
		} else{
			printf("Opção inválida, tente novamente.\n");
			return 1;
		}
		
		// Registra a combinação elevador-período na matriz
		combinacoes[indice_elevador][indice_periodo]++;
		
		printf("Deseja continuar? (* para finalizar)\n");
		scanf(" %c", &executar);
	}
	
	// Define o elevador mais utilizado
	char elevador_mais_usado;
	if(totA > totB && totA > totC){
		elevador_mais_usado = 'A';
	} else if(totB > totA && totB > totC){
		elevador_mais_usado = 'B';
	} else {
		elevador_mais_usado = 'C';
	}
	
	// define o período com maior fluxo de pessoas
	char periodo_mais_usado;
	int indice_periodo_mais_usado;
	
	if(totM > totN && totM > totV){
		periodo_mais_usado = 'M';
		indice_periodo_mais_usado = 0;
	} else if(totN > totM && totN > totV){
		periodo_mais_usado = 'N';
		indice_periodo_mais_usado = 1;
	} else {
		periodo_mais_usado = 'V';
		indice_periodo_mais_usado = 2;
	}
	
	// Encontra qual elevador mais utilizado no período mais usado
	char elevador_mais_usado_no_periodo;
	int maior = -1;
	
	// Verifica qual elevador tem maior valor na coluna do período mais usado
	for(int i = 0; i < 3; i++){
		if(combinacoes[i][indice_periodo_mais_usado] > maior){
			maior = combinacoes[i][indice_periodo_mais_usado];
			if(i == 0){
				elevador_mais_usado_no_periodo = 'A';
			} else if(i == 1){
				elevador_mais_usado_no_periodo = 'B';
			} else {
				elevador_mais_usado_no_periodo = 'C';
			}
		}
	}
	
	// Exibe os resultados conforme solicitado
	printf("\n=== RESULTADOS ===\n");
	printf("O elevador mais utilizado é: %c\n", elevador_mais_usado);
	printf("O período com maior fluxo de pessoas é: %c\n", periodo_mais_usado);
	printf("O período mais usado de todos é: %c\n", periodo_mais_usado);
	printf("Neste período (%c), o elevador mais utilizado é: %c\n", 
	       periodo_mais_usado, elevador_mais_usado_no_periodo);
	
	return 0;
}