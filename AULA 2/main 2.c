#include <stdio.h>
/*2) Leia um número inteiro e informe se ele é par ou ímpar.*/
int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    
     if (numero % 2 == 0) {
        printf("%i é par.", numero);
        
    } else {
        printf("%i é ímpar.", numero);
    }

}