#include <stdio.h>

int main() {
    char tabTeatro[6][10];
    char tipoIngresso;
    float valIngresso, valComum, valEstudante, valIdoso, totalFaturado;
    int lin, col, totalC = 0, totalE = 0, totalI = 0;

    printf("Digite o valor do ingresso: ");
    printf("Digite o valor do ingresso: ");
    scanf("%f", &valIngresso);

    printf("\nDigite o tipo de ingresso para cada assento (C/E/I/V):\n");

    for (lin = 0; lin < 6; lin++) {
        for (col = 0; col < 10; col++) {

            printf("Assento [%d][%d]: ", lin + 1, col + 1);
            scanf(" %c", &tipoIngresso); // espaço antes do %c evita leitura de \n

            tabTeatro[lin][col] = tipoIngresso;

            if (tipoIngresso == 'E' || tipoIngresso == 'e') {
                totalE++;
            }
            else if (tipoIngresso == 'I' || tipoIngresso == 'i') {
                totalI++;
            }
            else if (tipoIngresso == 'C' || tipoIngresso == 'c') {
                totalC++;
            }
        }
    }

    // Cálculos
    valComum = valIngresso * totalC;
    valEstudante = (valIngresso * 0.90f) * totalE;  
    valIdoso = (valIngresso * 0.80f) * totalI;      
    totalFaturado = valComum + valEstudante + valIdoso;

    // Saída
    printf("\n===== RESULTADOS =====\n");
    printf("Quantidade de ingressos Comuns: %d\n", totalC);
    printf("Valor arrecadado com Comuns: R$ %.2f\n\n", valComum);

    printf("Quantidade de ingressos Estudante: %d\n", totalE);
    printf("Valor arrecadado com Estudantes: R$ %.2f\n\n", valEstudante);

    printf("Quantidade de ingressos Idoso: %d\n", totalI);
    printf("Valor arrecadado com Idosos: R$ %.2f\n\n", valIdoso);

    printf("Faturamento Total: R$ %.2f\n", totalFaturado);

    return 0;
}
