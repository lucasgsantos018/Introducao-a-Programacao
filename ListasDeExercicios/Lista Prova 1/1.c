#include <stdio.h>

int main()
{
    float menor , numero ;
    printf("Digite um número,entre 5 para saber qual o menor: ");
    scanf("%f", &numero);
    menor = numero;
    for(int i = 1;i <= 4; i++)
    {
        printf("Digite um número,entre 5 para saber qual o menor: ");
        scanf("%f", &numero);

        if(numero < menor)
        {
            menor = numero;
        }
    }
    printf("Menor : %.2f\n", menor);
    return 0;
}