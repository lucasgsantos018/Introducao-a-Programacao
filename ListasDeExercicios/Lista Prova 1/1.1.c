#include <stdio.h>

int main()
{
    int i1 , i2 , i3 , i4 , i5 ;
    printf("Digite o valor de cinco números para saber o menor:\n");
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%d", &i3);
    scanf("%d", &i4);
    scanf("%d", &i5);

    if(i1 < i2 && i1 < i3 && i1 < i4 && i1 < i5)
    {
        printf("Menor: %d\n", i1);
    }
    else if (i2 < i1 && i2 < i3 && i2 < i4 && i2 < i5)
    {
        printf("Menor: %d\n", i2);
    }
    else if (i3 < i1 && i3 < i2 && i3 < i4 && i3 < i5)
    {
        printf("Menor: %d\n", i3);
    }
    else if(i4 < i1 && i4 < i2 && i4 < i3 && i4 < i5)
    {
        printf("Menor: %d\n", i4);
    }
    else 
    {
        printf("Menor: %d\n", i5);
    }
    return 0;
}      
 
