#include <stdio.h>

int main()
{
    float  valor ;
    int contpositivo = 0 , contnegativo = 0;
    printf("Digite um número real (Parar = 0):");
    while(valor != 0)
    {
        scanf("%f", &valor);
        if(valor > 0)
        {
            contpositivo++;
        }
        else if(valor < 0)
        {
            contnegativo++;
        }
    }
    printf("Quantidade de positivos: %d\nQuantidade de negativos: %d\n", contpositivo,contnegativo);
    return 0;
}