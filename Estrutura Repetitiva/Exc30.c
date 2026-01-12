// Um caixa automático efetua saques utilizando notas de 50 e 20 reais. Construa um algoritmo que tenha como entrada
// de dados o valor do saque do cliente em seguida calcule e exiba as quantidades de cada nota (50 e 20) que serão
// fornecidas ao cliente. Considere que:
// • A prioridade do caixa automático é fornecer as notas de maior valor.
// • O saque máximo permitido por cliente é de até R$ 1.000,00. Caso o cliente tente sacar um valor maior, uma mensagem
// de advertência deve ser exibida pelo algoritmo.

// • Caso o cliente tente sacar um valor (Ex.: 471 175 32) que não possa ser representado pelas notas de 50 e 20 o algoritmo
// deve exibir uma mensagem de advertência.

// Exemplo de Entrada: 100
// Saída: 2 nota(s) de 50 | 0 nota(s) de 20

// Entrada: 120
// Saída: 2 nota(s) de 50 | 1 nota(s) de 20

// Entrada: 80
// Saída: 0 nota(s) de 50 | 4 nota(s) de 20

// Entrada: 110
// Saída: 1 nota(s) de 50 | 3 nota(s) de 20

// Entrada: 1200
// Saída: Valor acima do saque máximo permitido de R$ 1000,00

// Entrada: 471
// Saída: Valor de saque não permitido para notas de 50 e de 20 reais

#include <stdio.h>

int main(){
	int saque, resto, tot50, tot20;
	saque = 0;
	tot50 = 0;
	tot20 = 0;
	
	// Flag para controlar a execução do programa
	int continuar = 1;
	
	while(continuar){ 
		printf("Qual valor deseja sacar? (99999 para finalizar): ");
		scanf("%d", &saque);
		
		// Verifica se o usuário deseja finalizar
		if(saque == 99999){
			continuar = 0;
			continue;
		}
		
		// Verifica as condições estabelecidas pelo enunciado e reinicia o programa se forem verdadeiras
		if(saque > 1000){
			printf("Saque não permitido, valor superior ao limite do caixa eletrônico\n");
			continue;
		}	else if(saque % 10 !=0){
			printf("Valor de saque não permitido para notas de 50 e de 20 reais.\n");
			continue;
		}
		
		// Calcula a quantidade de notas 		
		tot50 = saque/50;
		resto = saque % 50;
		
		if(resto % 20 != 0){
            // Reduz uma nota de 50
            tot50--;
            // Adiciona 50 ao resto
            resto += 50;
		}
		
		tot20 = resto / 20;
		
		printf("%d nota(s) de 50 || %d nota(s) de 20\n", tot50, tot20);
	}
	
	printf("Programa finalizado.\n");
	return 0;
}