#include <stdio.h>

int main() {
    int pix;
do {
    printf("1: Ola\n2: Tudo bem?\n3: Sair\n");
    scanf("%d", &pix);

    if(pix == 1) printf("Ola\n");
    else if(pix == 2) printf("Tudo bem?\n");

} while(pix != 3);
}