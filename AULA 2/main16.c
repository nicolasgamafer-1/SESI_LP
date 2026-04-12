#include <stdio.h>
/*Cálculo de Conta de Energia
Leia o consumo em kWh:
Até 100 → R$0,50/kWh
101 a 200 → R$0,75/kWh
Acima de 200 → R$1,00/kWh
Calcule o valor total.*/

int main() {
    float consumo, valor;

    printf("Digite o consumo: ");
    scanf("%f", &consumo);

    if (consumo <= 100)
        valor = consumo * 0.50;
    else if (consumo <= 200)
        valor = consumo * 0.75;
    else
        valor = consumo * 1.00;

    printf("Valor: R$ %.2f\n", valor);

    return 0;
}