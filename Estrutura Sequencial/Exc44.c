// Construa um algoritmo que a partir do plano cartesiano representado pelos eixos X e Y faça a entrada das coordenadas
// x e y de um ponto e em seguida exiba o quadrante (Q1, Q2, Q3, Q4) que o ponto se encontra. Caso o ponto esteja na
// origem exibir a mensagem “ORIGEM”. Caso o ponto esteja no eixo X exibir a mensagem “Eixo X”. Caso o ponto esteja no
// eixo Y exibir a mensagem “Eixo Y”.

#include <stdio.h>

int main() {
    int Quadrante1, Quadrante2, Quadrante3, Quadrante4, EixoX, EixoY, EntradaX, EntradaY;

    Quadrante1 = 0;
    Quadrante2 = 0;
    Quadrante3 = 0;
    Quadrante4 = 0;
    EixoX = 0;
    EixoY = 0;

    printf("Digite as coordenadas X e Y (0 0 para sair):\n");
    scanf("%d %d", &EntradaX, &EntradaY);

    while (EntradaX != 0 || EntradaY != 0) {
        if (EntradaX > 0 && EntradaY > 0) {
            printf("Quadrante 1\n");
        }

        if (EntradaX < 0 && EntradaY > 0) {
            printf("Quadrante 2\n");
        }

        if (EntradaX < 0 && EntradaY < 0) {
            printf("Quadrante 3\n");
        }

        if (EntradaX > 0 && EntradaY < 0) {
            printf("Quadrante 4\n");
        }

        if (EntradaX == 0 && EntradaY != 0) {
            printf("Eixo Y\n");
        }
        
        if (EntradaY == 0 && EntradaX != 0) {
            printf("Eixo X\n");
        }

        // Contagem dos quadrantes
        if (EntradaX > 0 && EntradaY > 0) {
            Quadrante1 = Quadrante1 + 1;
        }
        
        if (EntradaX < 0 && EntradaY > 0) {
            Quadrante2 = Quadrante2 + 1;
        }
        
        if (EntradaX < 0 && EntradaY < 0) {
            Quadrante3 = Quadrante3 + 1;
        }

        if (EntradaX > 0 && EntradaY < 0) {
            Quadrante4 = Quadrante4 + 1;
        }

        if (EntradaX == 0 && EntradaY != 0) {
            EixoY = EixoY + 1;
        }
        
        if (EntradaY == 0 && EntradaX != 0) {
            EixoX = EixoX + 1;
        }

        // Ler próximas coordenadas
        printf("Digite as coordenadas X e Y (0 0 para sair):\n");
        scanf("%d %d", &EntradaX, &EntradaY);
    }

    // Exibir resultados da contagem
    printf("\nResultados:\n");
    printf("Quadrante 1: %d\n", Quadrante1);
    printf("Quadrante 2: %d\n", Quadrante2);
    printf("Quadrante 3: %d\n", Quadrante3);
    printf("Quadrante 4: %d\n", Quadrante4);
    printf("Eixo X: %d\n", EixoX);
    printf("Eixo Y: %d\n", EixoY);

    return 0;
}