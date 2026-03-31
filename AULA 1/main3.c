#include <stdio.h>

int main() {
    float n1, n2, n3, resultado, jaguara;

    printf("primeira nota: ");
    scanf("%f", &n1);

    printf("segunda nota: ");
    scanf("%f", &n2);

    printf("terceira nota: ");
    scanf("%f", &n3);

    resultado = n1 + n2 + n3;
    jaguara = resultado / 3;

    if (jaguara >= 7.0) {
        printf("%.2f = aprovado\n", jaguara);
    } else if (jaguara >= 3.0) {
        printf("%.2f = recuperação\n", jaguara);
    } else {
        printf("%.2f = reprovado\n", jaguara);
    }

    return 0;
}
