#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;
float soma(int n){
float s=0, aux;
for(aux=1;aux<=n;aux++)s=s+1/aux;
return (s);}
int main (void){
float s;
int n;
cout <<"Insira um valor inteiro positivo.\n";
cin >>n;
if (n>=1){
s=soma(n);
cout <<"Soma = "<<s<<endl;}
else cout <<"Numero invalido!!\n";
system("pause");
return (0);
}
