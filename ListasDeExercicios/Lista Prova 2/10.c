#include <stdio.h>

int main()
{
    int n ;
    double h = 0 , i = 1 , sinal = 1 , l = 0 ; 
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    while(n <= 0)
    {
        printf("Valor inválido, digite um novo valor: ");
        scanf("%d", &n);
    }


    while(i <= n)
    {
        
        h += (sinal * 1) / (l + 1 ) ;
        i++;
        sinal *= -1 ;
        l += 2;
        
        
    }
    printf("H = %.3lf \n", h );
    return 0;
}