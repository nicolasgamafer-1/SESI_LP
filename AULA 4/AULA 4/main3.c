#include <stdio.h>
/*3 - Um sistema armazenou 12 valores inteiros. classifique-os como ordem crescente, decrescente ou desordenada.*/
int main() {
    
    int valor, anterior, i;
    int crescente = 1, decrescente = 1;

    
    printf("Digite o 1o valor: ");
    scanf("%d", &anterior);

    for(i = 2; i <= 12; i++) {
        printf("Digite o %do valor: ", i);
        scanf("%d", &valor);

        if (valor > anterior) {
            decrescente = 0; 
        } else if (valor < anterior) {
            crescente = 0;   
        }

        anterior = valor; 
    }

    if (crescente) {
        printf("\nOrdem Crescente\n");
    } else if (decrescente) {
        printf("\nOrdem Decrescente\n");
    } else {
        printf("\nOrdem Desordenada\n");
    }

}
