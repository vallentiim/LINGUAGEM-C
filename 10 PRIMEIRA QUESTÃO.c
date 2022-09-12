#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;
float peso_ideal(float alt, char sex){
float peso;
if ((sex=='M')||(sex=='m'))peso=72.7*alt-58;
else if ((sex=='F')||(sex=='f'))peso=62.1*alt-44.7;
else peso=0;
return(peso);
}
int main (void){
char sex;
float alt, peso;
cout <<"Qual a altura em metros?\n";
cin >>alt;
cout <<"Qual o sexo? M ou F\n";
cin >>sex;
peso=peso_ideal(alt,sex);
if (peso!=0) cout <<"Peso ideal = "<<peso<<" Kg\n";
else cout <<"Caracter invalido!!\n";
system("pause");
return(0);
}
