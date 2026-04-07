/*10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30)*/

#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5) {
        printf("Magrin");
    } else if (imc < 25) {
        printf("Normal");
    } else if (imc < 30) {
        printf("Sobrepeso");
    } else {
        printf("Gordão");
    }

    
    
}