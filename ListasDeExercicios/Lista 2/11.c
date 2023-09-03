#include <stdio.h>

int main()
{
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("O ano é bissexto!\n");
    }
    else if (ano % 400 == 0)
    {
        printf("O ano é bissexto!\n");
    }
    else
    {
        printf("Não é bissexto.\n");
    }

    return 0;
}