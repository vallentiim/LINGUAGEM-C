#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, numero;

    do{
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &numero);
    }while(numero < 1 || numero > 10);

    for(i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", numero, i, numero * i);
}
