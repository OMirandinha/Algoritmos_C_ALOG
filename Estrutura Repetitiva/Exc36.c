// Um cinema que possui capacidade para 100 lugares está sempre com ocupação total. Foi realizada uma pesquisa
// onde cada pessoa respondeu um questionário no qual constava:
// • O Sexo (M-Masculino F-Feminino)
// • A idade
// • A opinião sobre o filme assistido (O-Ótimo B-Bom R-Regular)
// Elabore um algoritmo que, lendo estes dados, calcule e exiba:
// • A quantidade de respostas Bom.
// • A porcentagem de pessoas do sexo feminino com idade acima de 18 e abaixo de 25 que responderam Regular.
// • A maior idade que respondeu Ótimo.
// • A menor idade que respondeu Regular

# include <stdio.h>

int main(){
	int idade, totBom, totFemRegular, maior, menor;
	char sexo, opiniao;
	float porcetFemregular;
	
	totBom = 0;
	totFemRegular = 0;
	maior = 0;
	menor = 999;
	
	for(int i = 0; i<= 99; i++){
		printf("Qual seu sexo? (F/M) \n");
		scanf(" %c", &sexo);
		
		printf("Qual sua idade? \n");
		scanf("%d", &idade);
		
		// Efetua as condições da 2° exigência do enunciado
		if(sexo == 'F' || sexo == 'f'){
			if(idade > 18 && idade < 25){
				totFemRegular +=1;
			}
		}
		
		printf("Qual foi sua opinião sobre o filme? (O/B/R) \n");
		scanf(" %c", &opiniao);
		
		// Calcula o total de pessoas que respondeu "Bom"
		if(opiniao == 'b' || opiniao == 'B'){
				totBom += 1;
		}
		
		// Verifica a resposta da pessoa e então verifica as idades de acordo com as exigências do enunciado
		if(opiniao == 'O' || opiniao == 'o'){
			if(idade > maior){
				maior = idade;
			}
		}
		if(opiniao == 'R' || opiniao == 'r'){
			if(idade < menor){
				menor = idade;
			}
		}
	}
	
	// Calcula a porcentagem de pessoas que se encaixam no 2° item do enunciado
	porcetFemregular = (totFemRegular/100) * 100;
	
	printf("O total de pessoas que responderam 'Bom' foi %d \n", totBom);
	printf("A porcentagem de pessoas do sexo feminino com idades entre 18 e 25 anos que responderam regular foi %.2f%% \n", porcetFemregular);
	printf("A maior idade que respondeu 'otimo' foi %d \n", maior);
	printf("A menor idade que respondeu 'regular' foi %d", menor);
	
	return 0;

}