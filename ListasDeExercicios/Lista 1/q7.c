#include <stdio.h>

int main()
{
    int matricula, idade ;
    float salarioBruto, salarioLiquido;
    printf("\nMatrícula: ");
    scanf("%d", &matricula);
    printf("\nIdade: ");
    scanf("%d", &idade);
    printf("\nSálario bruto: ");
    scanf("%f", &salarioBruto);

    salarioBruto *= 1.38;

    salarioBruto *= 1.20;
    salarioLiquido = salarioBruto * 0.85 ;
    printf("Matrícula: %d\n", matricula);
    printf("Sálario bruto: R$%.2f\n", salarioBruto);
    printf("Salário Líquido: R$%.2f\n", salarioLiquido);
}