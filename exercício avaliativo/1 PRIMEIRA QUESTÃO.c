#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	FILE *pont_arq;
	char palavra[20];
	pont_arq = fopen("arq.txt", "w");
	fclose(pont_arq);
	
	printf("O ARQUIVO FOI CRIADO!\n");
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	
	printf("Escreva algo para gravar no arquivo.");
	scanf("%s", palavra);
	if (palavra == 0)
	{
		fclose(pont_arq);
	}
	fprintf(pont_arq, "%s", palavra);
	fclose(pont_arq);
	printf("Dados gravados com sucesso!");
	
	getch();
	system("pause");	
	return 0;
}
