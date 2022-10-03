#include<stdio.h>

int main(void){
float media = 0;
int cont = 0, idade = 0;
printf(" Digite idades, se quiser finalizar digite 0. \n\n");
for(int  i = 0; i < 5; i++ ){
i = 0;
   printf(" Informe a idade: ");
   scanf(" %i", &idade);
   if(idade == 0){

       i = 10;
   }else{
   media += idade;
   cont++;}
}
media = media / cont;
   printf("\n\n A media das idades informadas acima é: %0.1f ", media);
return  0;

}
