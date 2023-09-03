/*Pratica questão 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <string.h>

#define K 100
#define k 10

typedef struct
{
    char nome[100];
    int nMat;
    float notas[k];
} Aluno;
Aluno encontraAluno(Aluno nmn[], int nAlunos, int matricula);

int main()
{
    int n, m, tam = 0, cont = 0, matricula, contind = 0;
    float mediatotal = 0, mediaind = 0;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    printf("Digite a quantidade de notas: ");
    scanf("%d", &m);

    Aluno nmn[K];
    for (int i = 0; i < n; i++)
    {
        getchar();
        printf("\nDigite o nome do aluno: ");
        fgets(nmn[i].nome, 100, stdin);
        tam = strlen(nmn[i].nome);
        nmn[i].nome[tam - 1] = '\0';
        printf("Digite o número de matricula do aluno: ");
        scanf("%d", &nmn[i].nMat);
        for (int j = 0; j < m; j++)
        {
            printf("Digite o valor da %d prova: ", j + 1);
            scanf("%f", &nmn[i].notas[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mediatotal += nmn[i].notas[j];
            cont++;
        }
    }
    printf("\nMédia total das notas: %.2f\n", mediatotal / cont);
    printf("\nDigite um número de matrícula: ");
    scanf("%d", &matricula);
    Aluno total = encontraAluno(nmn, n, matricula);
    for (int i = 0; i < m; i++)
    {
        mediaind += total.notas[i];
        contind++;
    }
    printf("Nome completo: %s\tMédia: %.2f\n", total.nome, mediaind / contind);

    return 0;
}

Aluno encontraAluno(Aluno nmn[], int nAlunos, int matricula)
{
    for (int i = 0; i < nAlunos; i++)
    {
        nmn[i].nMat;
        if (nmn[i].nMat == matricula)
        {
            return nmn[i];
        }
    }
}