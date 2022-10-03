#include <stdio.h>

int main()
{
    float Altura,AlturaxPeso=0.0;
    char Sexo;

    printf("\nDigite a sua altura: ");
    fflush(stdin);
    scanf("%f",&Altura);

    printf("Digite o seu sexo (M ou F):");
    fflush(stdin);
    scanf("%c",&Sexo);

    if(Sexo == 'M'){
        AlturaxPeso+=((72.7*Altura)-58);
        printf("O seu peso ideal e: %.3f\n",AlturaxPeso);
    }
    else
    {
        AlturaxPeso=((62.1*Altura)-44.7);
        printf("O seu peso ideal e: %.3f\n",AlturaxPeso);
    }

    system("pause");
    return 0;
}
