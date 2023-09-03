#include <stdio.h>

int main()
{
    int matricula ;
    char cargo ;
    double salario ;
    printf("Digite a matrícula: ");
    scanf("%d", &matricula);
    printf("Digite o cargo(Operador = O , Programador = P): ");
    scanf(" %c", &cargo);
    printf("Digite o salário: R$");
    scanf("%lf", &salario);
    switch(cargo)
    {
        case 'O':
        case 'o': salario *= 1.20 ;
        break;
        case 'P':
        case 'p': salario *= 1.18; 
        break;
    }
    printf("Matricula: %d \t Salário reajustado: R$%.2lf\n", matricula , salario );
    return 0;
}