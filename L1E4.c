#include <stdio.h>

int main(){
    float altura, largura, totalTela;
    scanf ("%f", &altura);
    scanf ("%f", &largura);
    totalTela = (altura + largura) * 2;
    printf("%f", totalTela);

}