#include <stdio.h>

int main() {

	float temp[7], soma = 0, media, maior, menor;
	int acima = 0;

	for (int i = 0; i < 7; i++) {
		printf("Temp dia %d: ", i + 1);
		scanf("%f", &temp[i]);
		soma += temp[i];
		if (i == 0) {
			maior = menor = temp[i];
		}
		if (temp[i] > maior) maior = temp[i];
		if (temp[i] < menor) menor = temp[i];
	}

	media = soma / 7;
	int i = 0;
	while (i < 7) {
		if (temp[i] > media) acima++;
		i++;
	}

	printf("Media: %.2f\nMaior: %.2f\nMenor: %.2f\nDias acima da media: %d", media, maior, menor, acima);
	return 0;
}

