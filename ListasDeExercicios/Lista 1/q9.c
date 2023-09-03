#include <stdio.h>

int main()
{
    int luxo , padrao ;
    float salarioFix , salarioBruto, salarioLiquido;
    
    printf("Salário fixo: "); scanf("%f", &salarioFix);
    printf("Quantidade de modelos de luxo vendidos: "); scanf("%d", &luxo);
    printf("Quantidade de modelos padrões vendidos: "); scanf("%d", &padrao);
    
    salarioBruto = salarioFix + (luxo * 2000) + (padrao * 1000);
    salarioLiquido = salarioBruto * 0.92;
    printf("Salário bruto: %.2f \n", salarioBruto);
    printf("Salário Líquido: %.2f \n", salarioLiquido);
    return 0;
}