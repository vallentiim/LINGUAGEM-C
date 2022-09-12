#include <stdio.h>
#include <conio.h>
#include <math.h>

float Volume(float raio){
    float v= 4/3 * (PI*pow(raio,3));
    return v;
}

int main(){
    float Raio,Resultado;

    printf("INFORME O RAIO DA ESFERA PARA SABER SEU VOLUME:");
    scanf("%f",&Raio);

    Resultado=Volume(Raio);
    printf("%.3f\n",Resultado);

    getchar();
    return 0;
}
