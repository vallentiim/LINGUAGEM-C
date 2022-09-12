#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;
int comp(char s1[10], char s2[10]){
int ind=0, aux;
for (aux=0;aux<=9;aux++){
if (s1[aux]!=s2[aux]){
ind=aux+1;
aux=10;}}
return (ind);}

main (void){
char s1[10], s2[10];
int ind;
cout <<"Digite a primeira sequencia de caracteres. Max 10 caracteres.\n";
gets(s1);
cout <<"Digite a segunda sequencia de caracteres. Max 10 caracteres.\n";
gets(s2);
ind=comp(s1,s2);
if (ind==0)cout <<"Sequencias iguais.\n";
else cout <<"Posicao do primeiro caracter diferente entre as sequencias: "<<ind<<"\n";
system("pause");
return (0);
}
