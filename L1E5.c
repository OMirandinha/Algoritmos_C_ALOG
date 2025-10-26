#include <stdio.h>
int main(){
    int qtdDias;
    float duplicata, juros, valPagar;
    scanf ("%f", &duplicata);
    scanf("%f", &juros);
    scanf("%i", &qtdDias);

    valPagar = (juros/100 * qtdDias + duplicata) + duplicata;

    printf("%f", valPagar);

}