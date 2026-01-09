// Desenvolva uma aplicação que solicite um número de CPF e em seguida calcule exiba os dígitos verificadores para o
// número de CPF informado. Na implementação, o número do CPF deve ser do tipo long int. Utilize a estrutura repetitiva for(
// ) e a divisão inteira para controlar o processo de separação dos algarismos que vão compor o número do CPF.
// Forma do cálculo dos Dígitos Verificadores: O CPF é um número composto por 9 algarismos. Os dígitos verificadores são
// calculados com base nos valores e na posição sequencial destes algarismos.

// Inicialmente se calcula o valor do primeiro dígito, que será utilizado posteriormente para o cálculo do segundo dígito.
// Cálculo do 1o Dígito Verificador
// 1. Multiplicar cada um dos 9 dígitos iniciais pelo número correspondente a sua posição no CPF, e somar os resultados de
// cada multiplicação:

// (Algarismo1 * 1) + (Algarismo 2 * 2) + (Algarismo 3 * 3) + ... + (Algarismo 9 * 9)

// 2. Calcular o resto da divisão do valor obtido na soma por 11. Esse resto é o primeiro dígito verificador e, caso seja igual a
// 10, considerá-lo como sendo o número zero.
// Cálculo do 2o Dígito Verificador
// 1. Multiplicar cada um dos 10 algarismos disponíveis (os 9 do CPF mais o primeiro dígito verificador já obtido) de acordo
// com a seguinte regra: O primeiro (o mais à esquerda) por 11, o segundo por 10, o terceiro por 9, sucessivamente até o
// último (o mais à direita, que é o primeiro dígito verificador) que será multiplicado por 2, e somar os resultados de cada
// multiplicação:

// (Algarismo 1 * 11) + (Algarismo 2 * 10) + (Algarismo 3 * 9) + ... + (1o Dígito Verificador * 2)

// 2. Multiplicar o valor obtido com a soma por 10 e, em seguida, calcular o resto da divisão desse resultado por 11. Esse
// resto é o segundo dígito verificador e, caso seja igual a 10, considerá-lo como sendo o número zero.

#include <stdio.h>

int main() {
    long int cpf;
    int digitos[9];
    int i;
    int soma = 0;
    int digito1, digito2;

    printf("Digite os 9 primeiros digitos do CPF (sem pontos e sem digitos verificadores): ");
    scanf("%ld", &cpf);

    /* Separação dos 9 algarismos do CPF usando divisão inteira */
    for (i = 8; i >= 0; i--) {
        digitos[i] = cpf % 10;
        cpf = cpf / 10;
    }

    /* Cálculo do 1º dígito verificador */
    soma = 0;
    for (i = 0; i < 9; i++) {
        soma += digitos[i] * (i + 1);
    }

    digito1 = soma % 11;
    if (digito1 == 10) {
        digito1 = 0;
    }

    /* Cálculo do 2º dígito verificador */
    soma = 0;
    for (i = 0; i < 9; i++) {
        soma += digitos[i] * (11 - i);
    }
    soma += digito1 * 2;

    digito2 = (soma * 10) % 11;
    if (digito2 == 10) {
        digito2 = 0;
    }

    printf("Digitos verificadores do CPF: %d%d\n", digito1, digito2);

    return 0;
}