// Monte um função chamada ConverteBinario. Esta função tem como parâmetro de entrada um número inteiro
// compreendido entre 0 e 255. A função tem a finalidade de converter o número no formato binário.

// Construa um algoritmo para testar a função ConverteBinario. O algoritmo deve permitir o usuário informe qualquer número
// entre 0 e 255 quantas vezes ele quiser.

#include <stdio.h>

// Declaração da função
void ConverteBinario(int numero) {
    int binario[8] = {0};
    int numTemp = numero;  // Usamos uma cópia para não alterar o original
    
    // Conversão para binário usando divisões sucessivas
    for(int i = 7; i >= 0; i--) {
        binario[i] = numTemp % 2;
        numTemp = numTemp / 2;
    }
    
    // Exibição do resultado
    printf("O número %d em binário é: ", numero);
    for(int i = 0; i < 8; i++) {
        printf("%d", binario[i]);
    }
    printf("\n");
}

int main() {
    int num;
    char continuar;
    
    do {
        printf("\nDigite um número entre 0 e 255: ");
        scanf("%d", &num);
        
        // Limpa o buffer do teclado
        while(getchar() != '\n');
        
        // Validação do número
        if(num < 0 || num > 255) {
            printf("Número inválido! Digite um valor entre 0 e 255.\n");
        } else {
            // Chama a função para converter e exibir
            ConverteBinario(num);
        }
        
        // Pergunta se quer continuar
        printf("\nDeseja converter outro número? (S/N): ");
        scanf(" %c", &continuar);
        
    } while(continuar == 'S' || continuar == 's');
    
    printf("\nPrograma encerrado. Obrigado!\n");
    
    return 0;
}