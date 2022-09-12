#include<stdio.h>

int main(){
int tmvetor=30, tmA=0, tmB=0;
int x[tmvetor], a[tmvetor], b[tmvetor];

for(int i=0; i<tmvetor; i++){
printf("Insira um número inteiro para o vetor x %d", tmvetor+1);
scanf("%d", &x[i]);

if(x[i]>0){
a[i]=x[i];
tmA++; }
else{
b[i]=x[i];
tmB++; }

printf("\n"); }//fim do for

printf("\nOs elementos de a são: a={ ");
for(int i=0; i<tmA; i++){
printf("%d", a[i]);

if(i<(tmA-1)){ printf(", "); } }//fim do for
printf("}");

printf("\nOs elementos de b são: b={ ");
for(int i=0; i<tmB; i++){
printf("%d", b[i]);

if(i<(tmB-1)){ printf(", "); } }//fim do for
printf("}\n\n");

system("pause");

return 0; }
