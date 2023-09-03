#include <stdio.h>

int main()
{
    double valor , bonus ;
    printf("Digite o preço da compra: ");
    scanf("%lf", &valor);
    if(valor < 50000)
    {
        bonus = valor * 0.1 ;
    }
    else
    {
        bonus = valor * 0.15 ;
    }
    printf("Bônus: R$%.2lf\n", bonus);
    return 0;
}