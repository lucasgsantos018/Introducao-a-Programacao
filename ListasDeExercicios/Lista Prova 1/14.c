#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int aposta, soma, dado1, dado2;
    printf("Digite o valor da soma dos dois dados: ");
    scanf("%d", &aposta);

    while (aposta < 2 || aposta > 12)
    {
        printf("Valor de soma inválido,digite novamente: ");
        scanf("%d", &aposta);
    }

    srand(time(NULL));
    dado1 = rand() % 6 + 1;
    dado2 = (rand() % 6 + 1);
    soma = dado1 + dado2;

    printf("\nDado 1: %d\tDado 2: %d\tSoma: %d\n", dado1, dado2, soma);

    if (aposta == soma)
    {
        printf("Parabens, você venceu!!\n");
    }
    else
    {
        printf("Você perdeu!!\n");
    }

    return 0;
}
