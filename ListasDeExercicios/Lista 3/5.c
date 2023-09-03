#include <stdio.h>

int main()
{
    int multiplo;
    printf("Digite o valor: ");
    scanf("%d", &multiplo);

    for (int i = 6; i <= multiplo; i += 3)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}