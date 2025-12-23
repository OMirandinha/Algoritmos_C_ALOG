// Construa um algoritmo que calcule a quantidade de tela necessária para cercar um terreno retangular.

#include <stdio.h>
	
int main(){
	float largura, altura, totalTela;
	
	printf("Digite a largura do terreno em metros: ");
	scanf("%f", &largura);
	
	printf("Digite a altura do terreno em metros: ");
	scanf("%f", &altura);
	
	//Calcula o perímetro do terreno
	totalTela = (altura + largura) * 2;
	
	printf("%.2f", totalTela);
	
}
