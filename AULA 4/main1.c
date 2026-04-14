#include <stdio.h>
/*1 - Um professor registrou as notas de 10 alunos em um array.
Crie um programa que:
calcule a mC)dia da turma
identifique quantos alunos ficaram acima da mC)dia
exiba apenas as notas acima da mC)dia*/
int main() {
	float nota[10], soma = 0, media;
	int i, total=0, x=0;

	for(i = 0; i < 10; i++) {
		printf("DIGITE a nota dos alunos: ");
		scanf("%f", &nota[i]);
		soma = soma + nota[i];
		if (nota[i] >= 7){
	    total++;
		
	}
	}
    media = soma * 0.10;
	printf("media da turma: %.1f\n", media);
	

	printf("total de alunos acima media: %i", total);
	
	while(x<10){
	    if (nota[x] >= 7){
	        printf("\n %i - nota: %.1f", x+1, nota[x]);
	    }
	    x++;
	}
	}