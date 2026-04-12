#include <stdio.h>
int main() {
    /*1) Classificação de Idade
Leia a idade de uma pessoa e informe:
Criança (0–12)
Adolescente (13–17)
Adulto (18–59)
Idoso (60+)*/
	int calculo;

	printf("qual idade tu tem: ");

	scanf("%i", &calculo);

	
	if (calculo >= 0 &calculo <= 12) {
		printf("%i = Criança", calculo);
	}else if (calculo >=13 &calculo <= 17){
	    printf("%i = Adolescente", calculo);    
	}else if (calculo >=18 &calculo <= 59){
	    printf ("%i = Adulto",calculo);
	}else if (calculo <= 60){
	    printf ("%i = idoso",calculo);
	}
}
	
