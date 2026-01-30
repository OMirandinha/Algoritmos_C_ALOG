// Construa uma função chamada de CalcDifHor. Esta função tem como parâmetros de entrada dois números inteiros.
// Cada número representa um horário em horas e minutos no formato hhmm. Esta função tem a finalidade de calcular e
// devolver, em minutos, a diferença entre os dois horários. Considere que o primeiro horário é menor que o segundo horário.
// Exemplo: CalcDifHor(805, 1230) → 265
// Construa um algoritmo para calcular e exibir o valor a ser pago pelo período de estacionamento de um carro. Considere
// como entrada de dados: número da placa do carro, horário de entrada (no formato hhmm) e o horário de saída (no formato
// hhmm). Sabe-se que o estacionamento cobra R$ 1,50 a cada intervalo completo de 15 minutos. Por exemplo, se a pessoa
// ficar 1 hora e 20 minutos, pagará R$ 7,50 (R$ 6,00 pela hora e R$ 1,50 pelos vinte minutos). Ao final do algoritmo deve
// ser exibido o total faturado pelo estacionamento. Considere que para finalizar o algoritmo deve ser informado 0 (zero) para
// a placa de um carro.

#include <stdio.h>

// Declaração e definição da função
int CalcDifHor(int a, int b){
    int hora1, min1, hora2, min2, totalMin1, totalMin2, diferenca;
    
    // Extrai horas e minutos do primeiro horário (a)
    hora1 = a / 100;  // Divide por 100 para obter as horas
    min1 = a % 100;   // Resto da divisão por 100 para obter os minutos
    
    // Extrai horas e minutos do segundo horário (b)
    hora2 = b / 100;  // Divide por 100 para obter as horas
    min2 = b % 100;   // Resto da divisão por 100 para obter os minutos
    
    // Converte cada horário para minutos totais desde meia-noite
    totalMin1 = hora1 * 60 + min1;
    totalMin2 = hora2 * 60 + min2;
    
    // Calcula a diferença em minutos
    diferenca = totalMin2 - totalMin1;
    
    return diferenca;  // Retorna a diferença em minutos
}

int main(){
    int numPlaca, entrada, saida, minutos, intervalos;
    float valPagar, faturaTotal;
    faturaTotal = 0;
    
    while(1){
        printf("Digite o número da placa do carro: \n");
        scanf("%d", &numPlaca);
        if(numPlaca == 0){
            break;
        }
        
        printf("Digite o horário de entrada (hhmm) \n");
        scanf("%d", &entrada);
        
        printf("Digite o horário de saída: \n");
        scanf("%d", &saida);
        
        // Chama a função para calcular a diferença em minutos
        minutos = CalcDifHor(entrada, saida);
        
        // Calcula quantos intervalos completos de 15 minutos (divisão inteira)
        intervalos = minutos / 15;
        
        // Calcula o valor a pagar (R$ 1,50 por intervalo COMPLETO de 15 minutos)
        valPagar = intervalos * 1.50;
        
        printf("O valor a ser pago pelo carro de placa %d é %.2f \n", numPlaca, valPagar);
        faturaTotal += valPagar;
        
    }
    
    printf("O faturamento total do estacionamento foi de %.2f \n", faturaTotal);
    
    return 0;
}