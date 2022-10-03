#include <stdio.h>
int main()
{
    char ch;
    printf("\nDigite um caracter para saber o valor ASCII dos 3 números anteriores e posteriores:  ");
    scanf("%c",&ch);
    printf("\nCaracter digitado: %c, Valor ASCII: %d", ch-3, ch-3);
    printf("\nCaracter digitado: %c, Valor ASCII: %d", ch+3, ch+3);
    return 0;
}
