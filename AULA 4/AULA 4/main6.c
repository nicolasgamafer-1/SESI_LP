#include <stdio.h>

int main() {
    int num[10], par[10], impar[10], cP = 0, cI = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) par[cP++] = num[i];
        else impar[cI++] = num[i];
    }

    printf("Pares (%d): ", cP);
    int j = 0;
    while (j < cP) printf("%d ", par[j++]);

    printf("\nImpares (%d): ", cI);
    j = 0;
    while (j < cI) printf("%d ", impar[j++]);

}