#include <stdio.h>
int main(){
    int mat[3][5];
    int i, 
        j; 
    int quantidadeelementos = 0;
    float numerospares;
    
    printf("\n Informe os numeros da matriz==> ");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
           scanf("%i", &mat[j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
                if ((mat[j] > 15) && (mat[j] < 20)){
                quantidadeelementos = quantidadeelementos+1;
            }
                if (mat[j] % 3 == 0){
                    numerospares = numerospares+1;
                }
          }
    }    
    printf("\nA quantidade de numeros da matriz entre 15 e 20 e==> %i\n", quantidadeelementos);
    printf("\nA media dos elementos pares da matriz é igual à==> %.2f\n", (numerospares / 8) * 100);

    getch();
    return 0;
}
