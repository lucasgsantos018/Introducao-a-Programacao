/*Questao 1 pratica 09
/ Lucas Gomes dos Santos
/ Matricula: 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite o número de termos: ");
    scanf("%d", &termos);
    while (n <= 2)
    {
        printf("O número precisa ser maior que dois, digite novamente: ");
        scanf("%d", &termos);
    }
    const int K = termos;
    int vetor[K];
    vetor[0] = 1;
    vetor[1] = 1;

    for (int i = 2; i < K; i++)
    {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }
    return 0;
}
