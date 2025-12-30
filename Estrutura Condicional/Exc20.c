// Construa um algoritmo que receba o Código do Funcionário e o Número de Horas Trabalhadas. O código do funcionário
// deve constar de 4 dígitos onde o primeiro dígito corresponde ao setor do funcionário e os três últimos correspondem ao
// número do funcionário. Exemplo: 3452 indica que o funcionário 452 trabalha no setor 3. Após a entrada de dados, calcule
// e exiba o salário do funcionário. Considere que:
// • Salário = Horas Trabalhadas x Valor Hora Trabalhada
// • Caso a quantidade de Horas Trabalhadas seja maior que 400, o funcionário recebe 10% a mais no Valor da Hora
// Trabalhada por hora excedente. O Valor da Hora Trabalhada depende do código do setor do funcionário.

//setor 1 = 7.80
//setor 2 =  11.50
//setor 3 = 18.25

#include <stdio.h>

int main(){
	int codFunc, horasTrab, horaExcedente, setorFunc;
	float valHora, valHoraExcedente, salFunc;
	
	// Calcula o setor do funcionário a partir de uma divisão por 1000
	printf("Digite o código do funcionário: \n");
	scanf("%d", &codFunc);
	setorFunc = codFunc / 1000;
	
	// Separa o código do funcionário do setor
	codFunc %= 1000;
	
	// Calcula o valor da hora trabalhada baseado no setor respectivo
	if(setorFunc == 1){
		valHora = 7.80;
	} else if(setorFunc == 2){
		valHora = 11.50;
	} else if(setorFunc == 3){
		valHora = 18.25;
	} else {
		printf("Setor inválido, digite novamente");
		return 1;
	}
	
	//Verifica o total de horas e realiza o acréscimo de 10% quando necessário
	printf("O funcionário trabalhou por quantas horas no total?");
	scanf("%d", &horasTrab);
	if(horasTrab > 400){
		horaExcedente = horasTrab - 400;
		valHoraExcedente = valHora * 1.10 * horaExcedente;
		salFunc = 400 * valHora + valHoraExcedente;
	} else{
		salFunc = horasTrab * valHora;
	}
	
	//Exibe os valores ao usuário
	printf("O funcionário %d do setor %d possui um salário de %.2f", codFunc, setorFunc, salFunc);
	
	return 0;
	
}