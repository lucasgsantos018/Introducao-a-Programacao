#include <stdio.h>

void ord3( int *a , int *b, int *c )
{
    if (*a > *b && *a > *c)
    {
        if(*b > *c )
        {
            int aux1 , aux2 ;
            aux1 = *a;
            aux2 = *c;
            *c = aux1;
            *a = aux2;
        }
        else if(*c > *b)
        {
            int aux3 , aux4 , aux5 ;
            aux3 = *a;
            aux4 = *b;
            aux5 = *c;
            *a = aux4;
            *b = aux5;
            *c = aux3;
        }
        
    }
    
    if (*c > *a && *c > *b)
    {
        if(*a > *b)
        {
            int aux1,aux2;
            aux1 = *a;
            aux2 = *b;
            *a = aux2;
            *b = aux1;
        }
    }

    if(*b > *a && *b > *c)
    {
        if(*c > *a)
        {
            int aux1,aux2;
            aux1 = *b;
            aux2 = *c;
            *b = aux2;
            *c = aux1;
        }
        else if(*a > *c)
        {
            int aux3 , aux4 , aux5 ;
            aux3 = *a;
            aux4 = *b;
            aux5 = *c;
            *c = aux4;
            *b = aux3;
            *a = aux5;
        }
    }
}

int main()
{
    int a , b , c ;
    printf("Digite o valor de a , b , c :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    ord3(&a , &b , &c );

    printf("\na = %d\tb = %d\tc = %d\n\n", a , b , c );

    return 0;
}
