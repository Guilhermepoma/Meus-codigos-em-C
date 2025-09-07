#include <stdio.h>

int main()
{
	float metro, decimetros, centimetro, milimetros;
	printf("Digite a valor em metros para a conversão: ");
	scanf("%f", &metro);
	decimetros = metro * 10;
	centimetro = metro * 100;
	milimetros = metro * 1000;
	printf("Decimetros = %.2f\n", decimetros);
	printf("Centimetro = %.2f\n", centimetro);
	printf("Milimetros = %.2f\n", milimetros);
	return 0;
}
