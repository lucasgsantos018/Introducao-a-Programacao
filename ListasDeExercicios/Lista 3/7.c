#include <stdio.h>

int main()
{
    int idade , media , i = 0 , soma = 0 ;
    printf("Digite as idades,zero (0) encerra o programa.\n");
    do
    {
        scanf("%d", &idade);
        soma += idade;
        i++;
    } while (idade != 0);
    i -= 1;
    media = soma / (float)(i);
    printf("Média das idades: %d \n", media );
    return 0;
    
}