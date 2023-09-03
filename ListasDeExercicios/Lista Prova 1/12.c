#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void teste(double total,double *inteiro,double *decimal)
{
    *inteiro = trunc(total);
    *decimal = total - trunc(total);

}

int main()
{
    double inteiro , decimal , total ;

    printf("Digite o valor: ");
    scanf("%lf", &total);
    teste(total, &inteiro , &decimal );

    printf("Parte inteira: %.0lf\tParte decimal: %lf\n", inteiro , decimal );
    return 0;
    
}