#include <stdio.h>

int main()
{
    float i1 , i2 , i3;
    printf("Digite o valor dos números para imprimi-los em ordem crescente: \n");
    scanf("%f", &i1);
    scanf("%f", &i2);
    scanf("%f", &i3);

    if(i1 < i2 && i1 < i3)
    {
        if(i2 < i3)
            printf("%.2f < %.2f < %.2f \n", i1 , i2 , i3);
        else
            printf("%.2f < %.2f < %.2f \n", i1 , i3 , i2);
    }

    if(i2 < i3 && i2 < i1)
    {
        if(i1 < i3)
            printf("%.2f < %.2f < %.2f \n", i2 , i1 , i3);
        else
            printf("%.2f < %.2f < %.2f \n", i2 , i3 , i1);
    }

    if(i3 < i2 && i3 < i1)
    {
        if(i2 < i1)
            printf("%.2f < %.2f < %.2f \n", i3 , i2 , i1);
        else
            printf("%.2f < %.2f < %.2f \n", i3 , i1 , i2);
    }
    return 0;
}