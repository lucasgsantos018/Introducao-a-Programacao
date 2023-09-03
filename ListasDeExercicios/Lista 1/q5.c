#include <stdio.h>

int main()
{
    char a , b , c , d , e ;
    printf("Digite um número inteiro de cinco digitos: ");
    scanf("%c%c%c%c%c", &a,&b,&c,&d,&e);
    printf("%c%3c%3c%3c%3c\n\n", a , b , c , d , e );
    return 0;
}