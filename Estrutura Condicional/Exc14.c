// Construa um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O programa
// deve mostrar uma mensagem de permissão de acesso ou não.

#include <stdio.h>


int main() {
    char senha[] = "4531";
    char tentativa[10];

    printf("Digite a senha do computador: ");
    scanf("%s", tentativa);

    if (strcmp(tentativa, senha) != 0) {
        printf("Acesso negado\n");
    } else {
        printf("Bem-vindo\n");
    }
}