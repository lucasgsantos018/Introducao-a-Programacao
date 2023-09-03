#include <stdio.h>

int main()
{
    int matricula;
    char cargo;
    float salario;

    while (salario != 0)
    {
        printf("Digite o salário: R$");
        scanf("%f", &salario);
        if (salario != 0)
        {
            printf("Digite a matrícula: ");
            scanf("%d", &matricula);
            printf("Digite o cargo(P = Programador , O = operador:  ");
            scanf(" %c", &cargo);

            switch (cargo)
            {
            case 'O':
            case 'o':
                salario *= 1.20;
                break;
            case 'P':
            case 'p':
                salario *= 1.18;
                break;
            }
            printf("Matricula: %d\tSalário reajustado: R$%.2f\n", matricula, salario);
        }
    }
    return 0;
}