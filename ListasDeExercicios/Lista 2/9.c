#include <stdio.h>

int main()
{
    int matricula;
    float nota, soma = 0;
    printf("Digite a matrícula: ");
    scanf("%d", &matricula);

    for (int i = 1; i <= 3; i++)
    {
        printf("Digite a nota da %d prova: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    if (soma / 3 >= 6)
    {
        printf("Matricula: %d\tMédia = %.2f||Status: Aprovado!!\n", matricula, soma / 3);
    }
    else if (soma / 3 < 6)
    {
        printf("Matricula: %d\tMédia = %.2f||Status: Reprovado!!\n", matricula, soma / 3);
    }
    return 0;
}