#include <stdio.h>

int main()
{
    float h = 0;
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("\nErro, número inválido digite novamente: ");
        scanf("%d", &n);
    }

    for (int i = 1; i <= n; i++)
    {
        h += 1 / (float)i;
    }

    printf("H = %f \n", h);
    return 0;
}