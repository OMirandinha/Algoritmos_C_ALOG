// Construa um algoritmo que tenha como entrada de dados um número inteiro. Calcule e exiba um número inteiro que
// representa a forma binária do número informado. Exemplo: Entrada: 29 Saída:11101

#include <stdio.h>

void imprimirBinario(int n) {
    if (n > 1) {
        imprimirBinario(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    
    printf("Digite um número inteiro: \n");
    scanf("%d", &num);
    
    printf("Número: %d\n", num);
    printf("Binário: ");
    
    if (num == 0) {
        printf("0");
    } else {
        imprimirBinario(num);
    }
    
    printf("\n");
    return 0;
}