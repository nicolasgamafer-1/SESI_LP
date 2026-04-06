#include <stdio.h>
/*7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno*/
int main() {
    float t, b, c;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &t, &b, &c);

    if (t < b + c & b < t + c & c < t + b) {
        if (t == b & b == c) {
            printf("Triângulo Equilátero");
        } else if (t == b || b == c || t == c) {
            printf("Triângulo Isósceles");
        } else {
            printf("Triângulo Escaleno");
        }
    } else {
        printf("Os valores informados não formam um triângulo.");
    }

}
