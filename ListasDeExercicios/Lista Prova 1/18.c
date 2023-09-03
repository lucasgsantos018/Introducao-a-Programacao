#include <stdio.h>

int main()
{
    int nmr ;
    printf("Digite o número para saber se é par ou ímpar: ");
    scanf("%d", &nmr);
    if(nmr % 2 == 0)
    {
        printf("É par.\n");
    }
    if(nmr % 2 != 0)
    {
        printf("É ímpar.\n");
    }
    return 0;
}