#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float soma;
    int auxiliar =1 ;

    // (n²+1)/(n+3)    
    while( auxiliar ) {
        printf("Digite um número qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        printf("Usuário digitou %d \n",auxiliar);
        if (auxiliar) {
          printf("Vamos somar até %d \n",auxiliar);
          soma=0;
          for (n=1;n<=auxiliar;n++){
              soma += (n*n+1.0)/(n +3.0);
          };
          printf("O resultado da série é %f \n\n",soma);
        }
        else {
             printf("entrada terminada pelo usuário \n");
        }
    };

}
