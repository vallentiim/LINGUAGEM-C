include <stdio.h>
#include <time.h> 
int main(void)
{ 
  struct tm *data_hora_atual;      
  time_t segundos;
  
  time(&segundos);   
  data_hora_atual = localtime(&segundos);  
  printf("\nDia..........: %d\n", data_hora_atual->tm_mday);  
  printf("\nMes..........: %d\n", data_hora_atual->tm_mon+1);
  printf("\nAno..........: %d\n\n", data_hora_atual->tm_year+1900);  
  
  printf("\nDia do ano...: %d\n", data_hora_atual->tm_yday);  
  printf("\nDia da semana: %d\n\n", data_hora_atual->tm_wday);
  printf("\nHora ........: %d:",data_hora_atual->tm_hour);  
  printf("%d:",data_hora_atual->tm_min);
  printf("%d\n",data_hora_atual->tm_sec); 
  printf("\nData ........: %d/", data_hora_atual->tm_mday);
  printf("%d/",data_hora_atual->tm_mon+1); 
  printf("%d\n\n",data_hora_atual->tm_year+1900); 
  
  return 0;
}
