#include <stdio.h>

int main() {
    int idade, i;
    int Jovem = 0, Adulto = 0, Idoso = 0;

    for(i = 1; i <= 15; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade <= 17) {
            Jovem++;
        } else if (idade <= 59) {
            Adulto++;
        } else {
            Idoso++;
        }
    }

    printf("\nJovens: %d  Adultos: %d  Idosos: %d\n", Jovem, Adulto, Idoso);

    if (Jovem > Adulto && Jovem > Idoso) {
        printf("O maior grupo e o de Jovens.\n");
    } else if (Adulto > Idoso) {
        printf("O maior grupo e o de Adultos.\n");
    } else {
        printf("O maior grupo e o de Idosos.\n");
    }

}