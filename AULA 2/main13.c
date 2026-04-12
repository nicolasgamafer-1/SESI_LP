/*13) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.
*/

#include <stdio.h>

int main(){
    float a, b, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') {
        resultado = a + b;
    } else if (op == '-') {
        resultado = a - b;
    } else if (op == '*') {
        resultado = a * b;
    } else if (op == '/') {
        if (b != 0) {
            resultado = a / b;
        } else {
            printf("Erro: divisao por zero");
            return 0;
        }
    } else {
        printf("Operacao invalida");
        return 0;
    }

    printf("Resultado: %.2f", resultado);
    
   
    
}