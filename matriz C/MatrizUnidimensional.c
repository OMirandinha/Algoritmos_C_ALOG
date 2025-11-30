#include <stdio.h>

int main() {
    int tabOriginal[5];
    int tabCalc[5];
    int col, somatoria = 0;

    for (col = 0; col < 5; col++) {

        printf("\nDigite o valor %d: ", col + 1);
        scanf("%d", &tabOriginal[col]);

        if (tabOriginal[col] % 2 == 0) {
            tabCalc[col] = tabOriginal[col] + 1;  // sucessor
        } else {
            tabCalc[col] = tabOriginal[col] - 1;  // predecessor
        }

        somatoria += tabCalc[col];
    }

    printf("\nSomatória dos valores da segunda matriz: %d\n", somatoria);

    return 0;
}
