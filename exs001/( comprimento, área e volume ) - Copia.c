#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float pi, raio, comprimento, area, volume; //variaveis

    printf("\nRecebe o raio de uma esfera, calcula e exibe: ");
    printf("\nO comprimento, a ·rea e o volume da esfera. \n");
	printf("\nRaio: ");
	scanf("%f", &raio); 
	pi = 3,14159;
	
	comprimento = 2.0 * pi * raio;
	area = pi * pow(raio, 2);
	volume = 3.0 / 4.0 * pi * pow(raio, 3);

	printf("\nComprimento: %.2f ", comprimento);
	printf("\n¡rea: %.2f ", area);
	printf("\nVolume: %.2f \n\n", volume); 

	return 0;
}
