// Construa um algoritmo que faça o cálculo e a exibição da proposta de seguro. A base do cálculo do seguro representa
// 10% do valor do carro. Em seguida, pode ser aplicado uma série de descontos em cima desta base. Os critérios de
// descontos são representados pela tabela abaixo:

// Tipo de Desconto e Percentagem sobre o Valor Base do Seguro

// Sexo Feminino: 7,5%

// Idade igual ou superior a 25 anos e abaixo de 40 anos: 2,5%

// Idade a partir dos 40 anos: 3,7%

// Perfil único motorista: 1,5%

// Perfil dirige somente na cidade: 1,8%

// Exemplo de cálculo

// Se o valor de um carro é R$ 10.000,00, a base de cálculo do seguro é R$ 1.000,00, o que representa 10% de R$ 10.000,00.

// Considerando que o dono do carro é do sexo feminino, tem 42 anos e dirige somente na cidade, aplicando os critérios de descontos temos:

// Desconto Sexo Feminino: 7,5% de R$ 1.000,00 = R$ 75,00

// Desconto Idade: 3,7% de R$ 1.000,00 = R$ 37,00

// Desconto Perfil: 1,8% de R$ 1.000,00 = R$ 18,00

// Total de descontos: R$ 130,00

// Valor do seguro:
// R$ 1.000,00 – R$ 130,00 = R$ 870,00

#include <stdio.h>

int main() {
    float valCarro, baseCalc, descFem, descIdade, descPerfil, valSeguro, totDescontos;
    int idade, perfilMotorista;
    char sex;

    printf("Digite o valor do carro desejado: ");
    scanf("%f", &valCarro);

    // Define a base de cálculo do seguro
    baseCalc = valCarro * 0.10;

    // Define se haverá desconto pelo sexo do segurado ou não
    printf("Qual é o seu sexo? (F/M) ");
    scanf(" %c", &sex);

    if (sex == 'F' || sex == 'f') {
        descFem = baseCalc * 0.075;
    } else {
        descFem = 0;
    }

    // Define os descontos referente a idade do segurado
    printf("Qual sua idade? ");
    scanf("%d", &idade);

    if (idade >= 25 && idade < 40) {
        descIdade = baseCalc * 0.025;
    } else if (idade >= 40) {
        descIdade = baseCalc * 0.037; // 3.7%
    } else {
        descIdade = 0;
    }

    // Define os descontos com base no perfil do motorista
    printf("Qual o perfil do motorista?\n");
    printf("1 - Para perfil único\n");
    printf("2 - Para perfil somente cidade\n");
    scanf("%d", &perfilMotorista);

    if (perfilMotorista == 1) {
        descPerfil = baseCalc * 0.015;
    } else if (perfilMotorista == 2) {
        descPerfil = baseCalc * 0.018;
    } else {
        printf("Opção inválida, tente novamente.\n");
        return 1;
    }

    // Calcula os valores do total de descontos e seguro e exibe ao usuário
    totDescontos = descFem + descIdade + descPerfil;
    printf("O total descontado foi R$ %.2f\n", totDescontos);

    valSeguro = baseCalc - totDescontos;
    printf("O valor do seguro será R$ %.2f\n", valSeguro);

    return 0;
}