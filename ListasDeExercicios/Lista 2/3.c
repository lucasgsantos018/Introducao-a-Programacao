#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite o valor de x e y: ");
    scanf("%d", &x);
    scanf("%d", &y);
    if (x % y == 0)
    {
        printf("É divisivel!");
    }
    else
    {
        printf("Não é divisivel!");
    }

    return 0;
}