// Desenvolva uma aplicação que crie e faça a entrada de dados para as matrizes PecaMes e LucroPeca indicadas
// abaixo. A primeira indica a quantidade vendida do Produto 1, do Produto 2 e do Produto 3 nos meses de Janeiro a Março
// e a segunda indica a margem de lucro para cada unidade vendida de um determinado produto. A aplicação deve gerar e
// exibir a matriz LucroMes, que indica o lucro obtido com a venda de cada produto. Observe que, tecnicamente falando, a
// matriz LucroMes é o produto das matrizes PecaMes e GranaPeca.

// Utilize uma lógica de programação de modo a agilizar o cálculo de cada elemento da matriz LucroMes, ou seja, o aluno
// não pode fazer o cálculo manualmente acessando elemento a elemento das matrizes PecaMes e LucroPeca.

#include <stdio.h>

int main(){
	int pecaMes[3][3];
	float lucroPeca[3], lucroMes[3];
	
	// Loop para realizar a entrada de dados da matriz pecaMes
	for(int i = 0; i<=2; i ++){
		for(int j = 0; j<=2; j++){
			printf("Digite a quantidade de peças vendidas do produto %d no mês %d\n", j+1, i+1);
			scanf("%d", &pecaMes[i][j]);
		}
	}
	
	// Loop para entrada de dados refente ao lucro de cada peça
	for(int i = 0; i<=2; i++){
		printf("Digite o lucro de cada unidade do produto %d\n", i+1);
		scanf("%f", &lucroPeca[i]);
	}
	
	// Realiza o cálculo da matriz lucroMes
	for(int i = 0; i<=2; i++){
		lucroMes[i] = 0;
		for(int j = 0; j<=2; j++){
			
			lucroMes[i] += pecaMes[i][j] * lucroPeca[j];
		}
		printf("O lucro do mês %d foi %.2f\n", i+1, lucroMes[i]);
	}
	
	return 0;
}