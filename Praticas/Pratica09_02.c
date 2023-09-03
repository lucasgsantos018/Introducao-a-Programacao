/*Questao 2 pratica 09
/ Lucas Gomes dos Santos
/ Matricula: 20.1.4108
/ Turma 43
*/

#include <stdio.h>

#define K 7

int main()
{
    double termos, vetor[K], termo;
    printf("Digite os 7 valores: ");
    for (int i = 0; i < K; i++)
    {
        scanf("%lf", &termos);
        vetor[i] = termos;
    }
    printf("Digite o termo a ser pesquisado: ");
    scanf("%lf", &termo);
    for (int i = 0; i < K; i++)
    {
        if (vetor[i] == termo)
        {
            printf("O valor foi encontrado!!\n");
            return 0;
        }
    }
    printf("O valor não foi encontrado!!\n");
    return 0;
}