#include <stdio.h>

int main() {
    int n, i, j, qtd;
    float nota, soma, media, mediaTurma = 0;
    float maior, menor;
    

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Quantidade de provas: ");
        scanf("%d", &qtd);

        soma = 0;

        for (j = 0; j < qtd; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &nota);

            soma += nota;

            if (j == 0) {
                maior = nota;
                menor = nota;
            } else {
                if (nota > maior) maior = nota;
                if (nota < menor) menor = nota;
            }
        }

        media = soma / qtd;
        mediaTurma += media;

        printf("Media: %.2f\n", media);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);

        if (media >= 7)
            printf("Situacao: Aprovado");
        else if (media >= 5)
            printf("Situacao: Recuperacao");
        else
            printf("Situacao: Reprovado");
    }

    mediaTurma /= n;

    printf("Media da turma: %.2f", mediaTurma);

    //entao e isso
    
    printf("por fim use a sua calculadora para confirmar nao confie em min");
}