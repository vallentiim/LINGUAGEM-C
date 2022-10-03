#include <stdio.h>
int main() {
    int dia;

    printf("Informe um numero de acordo com o dia para saber o campeonato: 1=Domingo | 2=Segunda | 3=Terça | 4=Quarta | 5=Quinta | 6=Sexta | 7=Sabado: ");
    scanf("%d", &dia);
    system("cls");

switch(dia) {
    case 1: printf("==> Domingo | Brasileirao - Serie A "); break;
    case 2: printf("==> Segunda | Brasileirao - Serie C"); break;
    case 3: printf("==> Terça | Premier League"); break;
    case 4: printf("==> Quarta | Liga dos Campeoes da UEFA"); break;
    case 5: printf("==> Quinta | Fußball-Bundesliga"); break;
    case 6: printf("==> Sexta | Serie A - Italiano "); break;
    case 7: printf("==> Sabado | Brasileirao - Serie B"); break;
    default: printf("==> Esse número não consta.");
    }
}
