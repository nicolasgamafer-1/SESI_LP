#include <stdio.h>
/*9) Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero*/
    int main(){
        int n1;
        
        printf("Digite um número: ");
        scanf("%i", &n1);

    if (n1 > 0) {
        printf("%i é positivo.", n1);
    } else if (n1 < 0) {
        printf("%i é negativo.", n1);
    } else {
        printf("%i é zero.", n1);
    }
 
    }