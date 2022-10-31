#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *farq;
  int i,j;
  char texto[50];
  char maiusc[50];
  char nomearq[20];
  int num;
  char c;

   printf("\n\nInforme o nome do arquivo: ");
   scanf("%s", &nomearq);
   scanf("%c",&c);
   farq = fopen(nomearq, "w");

   if (farq == NULL) {
        fprintf(stderr,"fopen() failed in file %s at line # %d", __FILE__,__LINE__);
        exit(EXIT_FAILURE);
   }

   for (i=0; i < 2; i++){
     printf("\n\nDigite uma frase com no maximo 50 caracteres: ");
     gets(texto);
     fflush(stdin);
      j=0;
       while ( texto[j] != '\0' && j < 49){
       maiusc[j] = toupper(texto[j]);  
       j++;
     }

       maiusc[j]='\0';
       fwrite(&num, sizeof(int), 1, farq); 
       fwrite(maiusc, sizeof(char), num, farq);
   }

  fclose(farq);
  farq = fopen(nomearq, "r");
   if (farq == NULL) {
        fprintf(stderr,"fopen() failed in file %s at line # %d", __FILE__,__LINE__);
        exit(EXIT_FAILURE);
   }

   fread(&num, sizeof(int),1,farq); 
   fread(texto, sizeof(char),num, farq); 
  while (!feof (farq) ) {
     printf("\n\nTexto Lido: %s", texto);
     memset(texto,'\0',50);
     fread(&num, sizeof(int),1,farq);   
     fread(texto, sizeof(char),num, farq); 
   }

   fclose(farq);
}
