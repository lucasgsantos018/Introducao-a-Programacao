#include <stdio.h>

void troca(int *a , int *b , int *c )
{
    int aux1 , aux2 , aux3 ;
    aux1 = *a;
    aux2 = *b;
    aux3 = *c;
    *a = aux2;
    *b = aux3;
    *c = aux1;
}

int main()
{
    int a , b , c ;
    printf("Digite o valor de a , b , c :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    troca(&a , &b , &c );

    printf("a = %d\tb = %d\tc = %d\n\n", a , b , c );
    return 0;
}