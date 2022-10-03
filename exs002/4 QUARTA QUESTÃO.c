#include <stdio.h>

int main(void)
{
  char nome[31];
  
  printf("Digite seu nome: ");
  scanf("%s",nome);
  
  printf("O nome armazenado foi: %s", nome);
  
  getch();
  return 0;
}
