#include <stdio.h>
#include <locale.h>

float segundos (float HORAS, float MINUTOS, float SEGUNDOS) {
	
		float min,calculo,ho;
		calculo=(S+(MINUTOS*60)+(HHORAS*60*60));
		return calculo;
		
	}

int main () {
	setlocale(LC_ALL, "Portuguese");	
	float HORAS,MINUTOS,SEGUNDOS;
	printf("\nINFORME A HORA, OS MUNUTOS E SEGUNDOS: : \n");
	scanf("%f%f%f",&HORAS,&MINUTOS,&SEGUNDOS);
	printf("\nTOTAL DE SEGUNDOS: %f",segundos(HORAS,MINUTOS,SEGUNDOS));
}
