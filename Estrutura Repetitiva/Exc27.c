// Desenvolva uma aplicação que tenha como entrada de dados as leituras pluviométricas semanais no período do
// primeiro semestre de um ano (janeiro a junho) de uma determinada região. Ao final calcule e exiba:
// · A média semanal das leituras pluviométricas
// · A média mensal das leituras pluviométricas
// · A maior e menor leitura pluviométrica no período
// · O número do mês que ocorreu maior leitura pluviométrica
// · O número do mês que ocorreu a menor leitura pluviométrica
// · A maior e a menor média mensal no período
// Considere que na entrada de dados, os valores das leituras pluviométricas são diferentes entre si.

#include <stdio.h>

int main() {
    int mes, semana, mesMaior = 0, mesMenor = 0;
    float leitura, mediaSemanal, mediaMensal;
    float maiorLeitura, menorLeitura, maiorMedia, menorMedia;
    float totSemanal = 0, totMensal;

    // Define loops encadeados para realizar a leitura de dados
    for (mes = 0; mes <= 5; mes++) {
        totMensal = 0;

        for (semana = 0; semana <= 3; semana++) {
            printf("Qual foi a media da semana %d do mes %d? ", semana + 1, mes + 1);
            scanf("%f", &leitura);

            totMensal += leitura;
            totSemanal += leitura;

            // Define a menor e maior leitura do periodo
            if (mes == 0 && semana == 0) {
                maiorLeitura = menorLeitura = leitura;
                mesMaior = mesMenor = mes;
            }

            if (leitura > maiorLeitura) {
                maiorLeitura = leitura;
                mesMaior = mes;
            }

            if (leitura < menorLeitura) {
                menorLeitura = leitura;
                mesMenor = mes;
            }
        }

        // Calcula a média mensal
        mediaMensal = totMensal / 4;
        printf("A media do mes %d foi %.2f\n", mes + 1, mediaMensal);

        // Define a maior e menor média mensal
        if (mes == 0) {
            maiorMedia = menorMedia = mediaMensal;
        } else {
            if (mediaMensal > maiorMedia) {
                maiorMedia = mediaMensal;
            }

            if (mediaMensal < menorMedia) {
                menorMedia = mediaMensal;
            }
        }
    }

    // Calcula a média semanal
    mediaSemanal = totSemanal / 24;
    printf("A media semanal do primeiro semestre foi %.2f\n", mediaSemanal);

    // Exibe as leituras pedidas ao usuário
    printf("A maior leitura registrada foi %.2f, no mes %d\n", maiorLeitura, mesMaior + 1);
    printf("A menor leitura registrada foi %.2f, no mes %d\n", menorLeitura, mesMenor + 1);

    // Exibe a maior e menor média mensal ao usuário
    printf("A maior media mensal foi %.2f\n", maiorMedia);
    printf("A menor media mensal foi %.2f\n", menorMedia);

    return 0;
}
