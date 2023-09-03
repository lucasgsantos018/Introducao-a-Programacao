#include <stdio.h>

int main()
{
    double salario;
    printf("Digite o valor do salario: R$");
    scanf("%lf", &salario);
    if (salario < 1000)
    {
        salario *= 1.15;
    }
    else if (salario >= 1000 && salario <= 2000)
    {
        salario *= 1.10;
    }
    else
    {
        salario *= 1.05;
    }
    printf("Salário reajustado: R$%.2lf\n", salario);
    return 0;
}