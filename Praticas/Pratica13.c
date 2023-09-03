/*Pratica questão 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <string.h>

#define K 100

typedef struct{

    char comida[K];
    float peso;
    float calorias;

}Dieta;

void lerdados(FILE *arquivo, Dieta dieta[K]);

int main()
{
    char Arquivo[K];
    printf("Digite o nome do arquivo: ");
    fgets(Arquivo,100,stdin);
    int tam = strlen(Arquivo);
    Arquivo[tam - 1] = '\0';
    FILE *arquivo = fopen(Arquivo, "r");
    Dieta dieta[K];
    lerdados(arquivo , dieta);
    return 0;




}

void lerdados(FILE *arquivo, Dieta dieta[K])
{
    int nmralimentos;
    int tamanho;

    fscanf(arquivo, "%d" , &nmralimentos);
    for(int i = 0 ; i < nmralimentos ; i++)
    {
        fscanf(arquivo,"%s %f %f", dieta[i].comida, &dieta[i].peso,&dieta[i].calorias);
    }
    fclose(arquivo);
    printf("%d\n", nmralimentos);
    for(int i = 0;i < nmralimentos; i++)
    {
        printf("%s\t%.2f\t%.2f\n", dieta[i].comida,dieta[i].peso,dieta[i].calorias);
    }
}