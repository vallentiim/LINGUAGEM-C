#include <stdio.h>
  int matriz[4][5];

    int i , j;
    for(i = 0 ; i < 4 ; i++){
        for(j = 0 ; j < 5 ; j++){
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    for(i = 0 ; i < 10 ; i++){
        for(j = 0 ; j < 10 ; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

 
