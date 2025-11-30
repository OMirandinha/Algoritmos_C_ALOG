#include <stdio.h>

int main() {
    int pecaMes[3][3];
    float lucroPeca[3];
    float lucroMes[3][3];
    int lin, col;

    // Entrada da matriz pecaMes
    printf("Digite a quantidade vendida de cada produto em cada mes:\n");
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            printf("Produto %d no mes %d: ", lin + 1, col + 1);
            scanf("%d", &pecaMes[lin][col]);
        }
    }

    // Entrada do vetor lucroPeca
    printf("\nDigite o lucro por unidade de cada produto:\n");
    for (lin = 0; lin < 3; lin++) {
        printf("Lucro do produto %d: ", lin + 1);
        scanf("%f", &lucroPeca[lin]);
    }

    // Cálculo da matriz lucroMes
    printf("\nLucro obtido por produto em cada mes:\n");
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            lucroMes[lin][col] = pecaMes[lin][col] * lucroPeca[lin];
            printf("Lucro do produto %d no mes %d: %.2f\n",
                   lin + 1, col + 1, lucroMes[lin][col]);
        }
    }

    return 0;
}
