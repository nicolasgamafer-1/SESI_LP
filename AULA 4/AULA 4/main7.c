#include <stdio.h>

int main() {
    float saques[10], total = 0, maior = 0;
    int acima500 = 0, i = 0;

    while (i < 10) {
        printf("Valor do saque %d: ", i + 1);
        scanf("%f", &saques[i]);
        total += saques[i];
        if (saques[i] > maior) maior = saques[i];
        if (saques[i] > 500) acima500++;
        i++;
    }

    printf("\nTotal: R$ %.2f", total);
    printf("\nMaior saque: R$ %.2f", maior);
    printf("\nSaques acima de R$ 500: %d", acima500);

}