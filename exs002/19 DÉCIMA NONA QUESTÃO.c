#include<stdio.h>

int main()
{
 int valor[20], i, soma=0;

 for(i=0; i<20; i++)
 {
 printf("Qual o %do valor?\n ", i+1);
 scanf("%d", &valor[i]);
 soma=soma+valor[i];
 }

 printf("A soma vale: %d", soma);

 getch(); 
