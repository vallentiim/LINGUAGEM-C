#include <iostream>
double preco, aum, valaum, imposto;
int cat;
char situa;
using namespace std;
main ()
{ 
  cout<<"INFORME O PREÇO DO PRODUTO\n";
  cin>>preco;
  cout<<"INFORME O CODIGO DO PRODUTO\n Digite==> 1 para Limpeza 2==> para Alimentacao e 3==> para Vestuario\n";
  cin>>cat;
  cout<<"Digite==> R para produtos que necessitam de refrigeracao\n e N==> para os produtos que nao precisam\n";
  cin>>situa;
      
     if (preco <= 25)
     {
              if  (cat == 1) {
              aum =preco * 0.05;
                 
              } 
              else
              if  (cat == 2) {
              aum = preco * 0.08;
                  
              } 
              else
              if  (cat == 3) {
              aum = preco * 0.10;
              
              }
              else
              cout<<"NÃO FOI POSSIVEL ENCONTRAR O CODIGO NO SISTEMA\n"; 
                       
            
    }
    else if (preco > 25)
    {
              if  (cat == 1) {
              aum = preco * 0.12;
              
              } 
              else
              if  (cat == 2) {
              aum = preco * 0.15;
                 
              } 
              else
              if  (cat == 3) {
              aum = preco * 0.18;
              
              }     
              else
              cout<<"NÃO FOI POSSIVEL ENCONTRAR O CODIGO NO SISTEMA\n"; 
      }
         
    valaum=preco + aum;
    cout<<"O valor do aumento foi de R$ "<<aum<<" seu novo valor é de R$ "<<valaum<<"\n";
    if ((cat == 2) || (situa == 'r')){
               imposto= valaum * 0.05;
               cout<<"Valor do imposto:"<<imposto<<"\n";
               } 
               else {
               imposto= valaum * 0.08;
               cout<<"Valor do imposto:"<<imposto<<"\n";
               }
               
               if (valaum <= 50 )
               cout<<"Barato\n";
               else if ((valaum >50) && (valaum < 120))
               cout<<"Normal\n";
               else
               cout<<"Caro\n";
      
          system("PAUSE"); 
     }
