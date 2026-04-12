#include <stdio.h>
/*5) Cálculo de Desconto
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.*/
int main() {
    float valorCompra, valorF;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra > 100.0) {
        valorF = valorCompra * 0.90; 
    } else {
        valorF = valorCompra * 0.95; 
    }

    printf("Valor final com desconto: R$ %.2f\n", valorF);

}
   
    