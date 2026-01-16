// Desenvolva uma aplicação que faça a entrada de dados para duas matrizes formadas (cada uma) por 20 dados do tipo
// caracter. Após a entrada dos valores faça um processamento que realize uma pesquisa utilizando as duas matrizes de

// modo a identificar os valores em comum que deverão ser armazenados, sem repetição, numa terceira matriz. Ao final do
// processamento exiba os conteúdos de cada matriz.

#include <stdio.h>

int main(){
	char mat1[20], mat2[20], mat3[20];
	int pos3 = 0; // Controla as posições da matriz 3
	
	printf("Digite os dados da matriz 1\n");

	// Loop for para realizar a entrada de dados dos 20 elementos da matriz
	for(int i = 0; i<=19; i++){
		scanf(" %c", &mat1[i]);
	}
	
	printf("Digite os dados da matriz 2\n");
	for(int i = 0; i<=19; i++){
		scanf(" %c", &mat2[i]);
	}
	
	// Percorre a matriz 1 e verifica se há alguma repetição de caracter
	for (int j =0; j <=19; j++){
		int existeMat2 = 0;
		int existeMat3 = 0;
		
		// Verifica se há repetição na matriz 2
		for (int i = 0; i <=19; i++){
			if (mat1[j] == mat2[i]){
				existeMat2 =1;
				break;
			}
		}
		
		// Verifica se há repetição na matriz 3
		for (int i = 0; i < pos3; i++){
			if(mat1[j] == mat3[i]){
				existeMat3 = 1;
				break;
			}
		}
		
		// Adiciona elementos à matriz 3 se não houver repetições entre a matriz 1 e 2 e se não estiver na matriz 3
		if (existeMat2 && !existeMat3){
			mat3[pos3] = mat1[j];
			pos3++;
		}
	}
	
	// Exibe ao usuário
	
	printf("\nMatriz 1:\n");
    for (int i = 0; i < 20; i++) printf("%c ", mat1[i]);

    printf("\n\nMatriz 2:\n");
    for (int i = 0; i < 20; i++) printf("%c ", mat2[i]);

    printf("\n\nMatriz 3 (comuns, sem repetição):\n");
    for (int i = 0; i < pos3; i++) printf("%c ", mat3[i]);

    return 0;
	

}

