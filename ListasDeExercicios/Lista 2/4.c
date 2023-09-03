#include <stdio.h>

int main()
{
    int matricula1 , matricula2;
    double salario1 , salario2 ;
    printf("Digite a matrícula do funcionario 1: ");
    scanf("%d", &matricula1 );
    printf("Digite a matrícula do funcionário 2: ");
    scanf("%d", &matricula2);
    printf("Digite o salario do 1 funcionário: ");
    scanf("%lf", &salario1);
    printf("Digite o salario do 2 funcionário: ");
    scanf("%lf", &salario2);
    if(salario1 > salario2)
    {
        printf("Matricula: %d \tMaior salário: R$%.2f\n", matricula1 , salario1 );
    }
    else
    {
        printf("Matricula: %d \t Maior salário: R$%.2lf \n", matricula2 , salario2);
    }
    return 0;

}