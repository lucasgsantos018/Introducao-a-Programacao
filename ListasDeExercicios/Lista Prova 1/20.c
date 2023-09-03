#include <stdio.h>

void funcao(int *ponteiro)
{
    if(*ponteiro % 2 == 0)
    {
        *ponteiro += 5 ;
    }
    else if(*ponteiro % 2 != 0)
    {
        *ponteiro += 8;
    }
}

int main()
{
    int ponteiro ;
    printf("Digite um número, se for par será somado 5, caso ímpar será somado 8: ");
    scanf("%d", &ponteiro);
    funcao(&ponteiro);
    printf("\nResultado: %d\n", ponteiro);
    return 0;
}