#include <stdio.h>
/*1 - Um professor registrou as notas de 10 alunos em um array.
Crie um programa que:
calcule a média da turma
identifique quantos alunos ficaram acima da média
exiba apenas as notas acima da média*/
int main() {
    float nota[10], soma = 0, joce;
    int i, media;

    for(i = 0; i < 10; i++) {
        printf("DIGITE a nota dos alunos: ");
        scanf("%f", &nota[i]);
        soma = joce + nota[i];
        media = joce * 0,10;
    }

    printf("média: %.1f\n", soma);

}