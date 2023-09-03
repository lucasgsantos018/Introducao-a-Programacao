#include <stdio.h>
#include <string.h>

#define K 100

typedef struct
{
    char name[K];
    float grade[1];
} Aluno;

int main()
{
    Aluno teste[K];
    int n;
    printf("Digite quantos alunos deseja registrar: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        printf("\nDigite o nome do aluno: ");
        getchar();
        fgets(teste[i].name, 100, stdin);
        int tam = strlen(teste[i].name);
        teste[i].name[tam - 1] = '\0';
        printf("Digite a nota do aluno: ");
        scanf("%f", &teste[i].grade[0]);
    }
    for (int i = 0; i < n; i++)
    {
        if (teste[i].grade[0] >= 6)
        {
            printf("Nome: %s\tNota: %.2f\n", teste[i].name, teste[i].grade[0]);
        }
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (teste[i].grade[0] < 6)
        {
            j++;
        }
    }
    if (j == n)
        printf("Nenhum aluno atingiu a nota maior que 6.\n");

    return 0;
}