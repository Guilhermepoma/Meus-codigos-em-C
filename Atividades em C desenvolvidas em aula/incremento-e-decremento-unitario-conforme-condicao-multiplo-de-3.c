#include <stdio.h>

int main() {
	int numero, total;

	printf("Digite um nC:mero: ");
	scanf("%d", &numero);

	if (numero % 3 == 0) {
		numero++;
		printf("1+ Valor igual a: %d", numero);
	} else {
		numero--;
		printf("1- Valor igual a: %d", numero);
	}
	return 0;
}