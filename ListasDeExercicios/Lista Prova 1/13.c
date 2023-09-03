#include <stdio.h>

int bissexto(int ano)
{
    if(ano % 4 == 0 && ano % 100 != 0)
    {
        return 1 ;
    }
    else if (ano % 400 == 0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}

int main()
{
    int ano , retorno ;
    printf("Digite o ano para saber se é bissexto: ");
    scanf("%d", &ano);
    retorno = bissexto(ano);
    printf("\nRetorno:%d\n\n", retorno);
    return 0;
}