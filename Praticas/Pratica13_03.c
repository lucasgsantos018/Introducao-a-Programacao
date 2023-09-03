/*Pratica questão 3
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <string.h>

#define K 100

typedef struct{
    char nome[K];
    float nota;
    float frequencia;
}Aluno;

int main()
{
    char Arquivo[K];
    int nmralunos , aprovados = 0;
    float notamedia = 0,frequenciamedia = 0,peaprovados;
    printf("Digite o nome do arquivo: ");
    fgets(Arquivo,100,stdin);
    int tam = strlen(Arquivo);
    Arquivo[tam - 1] = '\0';
    FILE *arquivo = fopen(Arquivo, "r");
    Aluno totalaluno[K];

    fscanf(arquivo, "%d" , &nmralunos);
    for(int i = 0 ; i < nmralunos ; i++)
    {
        fscanf(arquivo , "%s %f %f", totalaluno[i].nome,&totalaluno[i].nota,&totalaluno[i].frequencia);
    }
    for(int i = 0 ; i < nmralunos ; i++)
    {
        notamedia += totalaluno[i].nota;
        frequenciamedia += totalaluno[i].frequencia;
        if(totalaluno[i].nota >= 6 && totalaluno[i].frequencia >= 75)
        {
            aprovados++;
        }
    }
    fclose(arquivo);
    notamedia /= nmralunos;
    frequenciamedia /= nmralunos;
    peaprovados = (aprovados / (float) nmralunos) * 100;

    printf("Nota média: %.2f\n", notamedia);
    printf("Frequência média: %.0f%%\n", frequenciamedia);
    printf("Percentual de aprovação: %.0f%%\n", peaprovados);
    printf("\nNome dos alunos com nota acima da média: \n");

    for(int i = 0; i < nmralunos ; i++)
    {
        if(totalaluno[i].nota > notamedia)
        {
            printf("%s\n", totalaluno[i].nome);
        }
    }
    
    return 0;

}

