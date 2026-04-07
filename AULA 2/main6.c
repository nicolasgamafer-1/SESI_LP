#include <stdio.h>
/*6) Ano Bissexto
Leia um ano e informe se ele é bissexto ou não.
*/
int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%i", &ano);

    if ((ano % 400 == 0)||(ano % 4 == 0 & ano % 100 != 0)) {
        printf("%i é bissexto.", ano);
    } else {
        printf("%i não é bissexto.", ano);
    }


}
