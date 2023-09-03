#include <stdio.h>

int main()
{
    int matricula, carrovendido ;
    float salarioFix, salarioFinal , comissao, valorvenda ;
    printf("Digite a matrícula do vendedor: "); scanf("%d", &matricula);
    printf("Digite o número de carros vendidos pelo vendedor: "); scanf("%d", &carrovendido);
    printf("Digite o valor total das vendas: "); scanf("%f", &valorvenda);
    salarioFix = 2000;
    comissao = (0.05 * valorvenda) + (500 * carrovendido) ;
    salarioFinal = comissao + salarioFix ;

    printf("Salário do vendedor: %.2f \n", salarioFinal);
    return 0;
}