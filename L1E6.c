#include <stdio.h>

int main() {
    float SalFixo, ValVendas, ValComissao, SalFinal;
    
    scanf("%f %f", &SalFixo, &ValVendas);
    
    ValComissao = ValVendas * 0.04;
    SalFinal = SalFixo + ValComissao;
    
    printf("%f %f", ValComissao, SalFinal);
    
}