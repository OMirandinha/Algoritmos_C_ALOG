#include <stdio.h>
void main()
{
    int qtdDias;
    float valDiaria, valHosped;
    scanf("%f", &valDiaria);
    scanf("%i", &qtdDias);
    valHosped = valDiaria * qtdDias;
    printf("%f", valHosped);

}