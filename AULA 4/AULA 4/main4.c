#include <stdio.h>
/*4 - Dado um array de 10 números, determine se existe algum valor que aparece mais da metade das vezes (valor dominante).*/
int main() {
    
    int n[10], dominante = -1;

    for (int i = 0; i < 10; i++) scanf("%d", &n[i]);

    for (int i = 0; i < 10; i++) {
        int cont = 0, j = 0;
        while (j < 10) {
            if (n[i] == n[j]) cont++;
            j++;
        }
        if (cont > 5) {
            dominante = n[i];
        
        }
    }

    if (dominante != -1) printf("Dominante: %d", dominante);
    else printf("Nao existe valor dominante");

    
}
