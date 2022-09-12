#include <stdio.h>

int main (){

double temp[12], maior, menor

for(int i=0; i<12; i++){

double n;

scanf("%lf", &n);

temp[i]=n;

}

menor=temp[0];

maior=temp[0];

for(int i=0;i<12;i++) if (menor<temp[i]) menor = temp[i];

for(int i=0;i<12;i++) if (maior>temp[i]) maior= temp[i];

}

printf("a temperatura maior do ano foi: %lf\n", maior);

printf("a temperatura menor do ano foi: %lf\n", menor);
