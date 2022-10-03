#include <stdio.h>
#include <conio.h>

float calc_media()
{
 float soma, num, media, i;

 soma = 0;
 i = 0;
 num = 1;

 while(num != 0)
 {
 printf("\nDigite um numero positivo");
 scanf("%f", &num);

 while(num < 0)
 {
 printf("\nNumero invalidao!");
 printf("\nDigite um numero positivo novamente");
 scanf("%f", &num);
 }

 soma += num;

 i++;
 }

 media = soma/(i-1);

 return media;
}
main()
{
 float r;

 r = calc_media();

 printf("O valor medio digitado foi %f",r);
