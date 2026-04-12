/*10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30)*/

#include <stdio.h>

int main(){
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a % b == 0) {
        printf("O primeiro numero e multiplo do segundo");
    } else {
        printf("O primeiro numero nao e multiplo do segundo");
    }


    
    
}