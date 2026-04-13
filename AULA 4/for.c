#include <stdio.h>

int main() {
    float salario[3], soma = 0;
    int i;

    for(i = 0; i < 3; i++) {
        printf("DIGITE O %d SALARIO: ", i + 1);
        scanf("%f", &salario[i]);
        soma = soma + salario[i];
    }

    printf("A soma dos salarios é: %.2f\n", soma);

}