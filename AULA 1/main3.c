#include <stdio.h>
int main() {
	float n1, n2, n3, resultado, jaguara;

	printf("primeira nota: ");

	scanf("%f", &n1);

	printf("segunda nota: ");

	scanf("%f", &n2);

	printf("terceira nota:");

	scanf("%f", &n3);

	resultado=n1+n2+n3;
	jaguara=resultado/3;
	
	if (jaguara >= 7.0) {
		printf("%.2f = aprovado", jaguara);
	}else if (jaguara <= 6.9){
	    printf("%.2f = recuperação", jaguara);    
	}else if (jaguara <= 2.9){
	    printf ("%.2f = reprovado",jaguara);
	}
	
	
}
