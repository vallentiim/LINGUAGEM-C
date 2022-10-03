#include<iostream>
#include<string.h>

using namespace std;

struct dados
{
    int idade,nfilhos;
    float salario;
    char sexo;
};

int main()
{
    dados pessoas[2];
    int i,maioridade=0,menoridade=0,mulheres2f=0;
    float mediasal=0,somasal=0;

    for(i=0 ; i<2 ; i++)
    {
        cout<<"idade: ";
        cin>>pessoas[i].idade;
        cout<<"numero de filhos: ";
        cin>>pessoas[i].nfilhos;
        cout<<"salario : ";
        cin>>pessoas[i].salario;
        cout<<"sexo: ";
        cin>>pessoas[i].sexo;
        somasal=somasal+pessoas[i].salario;
    }

    for(i=0 ; i<2 ; i++)
    {


        if(i=0)
        {
            maioridade=pessoas[i].idade;
            menoridade=pessoas[i].idade;
        }
        if(pessoas[i].idade > maioridade)
        {
            maioridade=pessoas[i].idade;
        }
        if(pessoas[i].idade < menoridade)
        {
            menoridade=pessoas[i].idade;
        }
        if(pessoas[i].sexo=='f' || pessoas[i].sexo=='F' && pessoas[i].nfilhos>2)
            mulheres2f++;

    }
    mediasal=somasal/2;
    cout<<"media salarial: "<<mediasal<<endl;
    cout<<"maioridade: "<<maioridade<<endl;
    cout<<"menoridade: "<<menoridade<<endl;
    cout<<"mulheres com mais de 2 filhos: "<<mulheres2f;
    return 0;

}
