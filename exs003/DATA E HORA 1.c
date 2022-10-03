#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm *p;
    time_t seconds;

    time(&seconds);
    p = localtime(&seconds);

    printf("Dia do ano: %d\n", p->tm_yday);
    printf("Data: %d/%d/%d\n", p->tm_mday, p->tm_mon + 1, p->tm_year + 1900);
    printf("Hora: %d:%d:%d\n", p->tm_hour, p->tm_min, p->tm_sec);

    printf("\nGeral: %s\n", ctime(&seconds));

    return 0;
}
