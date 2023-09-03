#include <stdio.h>

void calcular(int indice,float *salario);

void calcular(int indice, float *salario)
{
    switch(indice)
    {
        case 1: *salario *= 1.65;
        break;

        case 2: *salario *= 1.35;
        break;

        case 3: *salario *= 0.88;
        break;
    }
}




int main()
{
    float salario;
    int indice ;
    printf("Digite o salário do funcionário: R$");
    scanf("%f", &salario);
    printf("\nDigite o índice de produtividade sendo:\n");
    printf("\nExcelente: 1\tIntermediário: 2\tRegular: 3\n");
    printf("\nÍndice: ");
    scanf("%d", &indice);
    calcular(indice , &salario );


    printf("Salário: R$%.2f\n", salario);
    return 0;
}