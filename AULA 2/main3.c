#include <stdio.h>
/*3) Maior entre dois números*/
int main() {
    int n1, n2;
    printf("digite um numero: ");
    scanf("%i", &n1);
    
    printf("digite o segundo numero: ");
    scanf("%i", &n2);
    
    if (n1>n2){
        printf("%i é maior que %i", n1, n2);
    }if (n1<n2){
        printf("%i é menor que %i", n1, n2);
    }if (n1==n2){
        printf("é igual", n1, n2);
    }
    
}