/*Questao 4 pratica 09
/ Lucas Gomes dos Santos
/ Matricula: 20.1.4108
/ Turma 43
*/
#include <stdio.h>

#define TAM_MAX 99

int main()
{
    float prova1[TAM_MAX], prova2[TAM_MAX];
    int n;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nDigite a nota da prova 1 do aluno %d: ", i + 1);
        scanf("%f", &prova1[i]);
        printf("Digite a nota da prova 2 do aluno %d: ", i + 1);
        scanf("%f", &prova2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nMédia do aluno %d = %.2f\n", i + 1, (prova1[i] + prova2[i]) / 2.0);
        if ((prova1[i] + prova2[i]) / 2.0 >= 60)
        {
            printf("Aluno %d: Aprovado!\n", i + 1);
        }
        else
        {
            printf("Aluno %d: Reprovado!\n", i + 1);
        }
    }
    return 0;
}