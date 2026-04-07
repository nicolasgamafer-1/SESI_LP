#include <stdio.h>

int main() {
    int n;
    printf("me diga um numero e o programa mestre fara um quadrado: ");
scanf("%d", &n);

for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        printf("#");
    }
    printf("\n");
}

}