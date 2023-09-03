#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {

        int resultado = pow(i, 2);
        printf("%d ", resultado);
    }
    printf("\n");
    return 0;
}