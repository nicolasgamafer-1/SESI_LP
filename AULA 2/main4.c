#include <stdio.h>

int main() {
    float jaguara;

    printf("nota: ");
    scanf("%f", &jaguara);

    if (jaguara >= 7.0) {
        printf("%.2f = aprovado\n", jaguara);
    } else if (jaguara >= 5.0) {
        printf("%.2f = recuperação\n", jaguara);
    } else {
        printf("%.2f = reprovado\n", jaguara);
    }

    return 0;
}
