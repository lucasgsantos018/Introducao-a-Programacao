/*Pratica questão 2
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#define K 100

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[K];
    float nota;
    float frequencia;
}Alunos;

void lerDados(int nAlunos , Alunos totalalunos[K]);
void imprimirDados(int nAlunos , Alunos totalalunos[K], FILE *arquivo);

int main()
{
    int nAlunos;
    
    printf("Digite o número de alunos: ");
    scanf("%d", &nAlunos);
    
    Alunos totalalunos[K];
    FILE *arquivo = fopen("Notas.txt", "w");
    lerDados(nAlunos , totalalunos);
    imprimirDados(nAlunos , totalalunos , arquivo);
    fclose(arquivo);

}

void lerDados(int Nalunos, Alunos totalalunos[K])
{
    for(int i = 0; i < Nalunos; i++)
    {
        printf("Digite o nome do aluno: ");
        getchar();
        fgets(totalalunos[i].nome,100,stdin);
        int tam = strlen(totalalunos[i].nome);
        totalalunos[i].nome[tam - 1] = '\0';
        printf("Digite a nota do aluno: ");
        scanf("%f", &totalalunos[i].nota);
        printf("Digite a frequencia do aluno em %%: %%");
        scanf("%f", &totalalunos[i].frequencia);
    }
}

void imprimirDados(int nAlunos, Alunos totalalunos[K], FILE *arquivo)
{
    fprintf(arquivo, "%d\n" , nAlunos);

    for(int i = 0;i < nAlunos;i++)
    {
        fprintf(arquivo, "%s %f %f\n", totalalunos[i].nome , totalalunos[i].nota , totalalunos[i].frequencia);
    }
}

