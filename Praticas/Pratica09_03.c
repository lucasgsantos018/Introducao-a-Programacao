/*Questao 3 pratica 09
/ Lucas Gomes dos Santos
/ Matricula: 20.1.4108
/ Turma 43
*/
#include <stdio.h>


int main()
{
    int K , termo ;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &K);
    while(K > 50 && K <= 0)
    {
        printf("Número inválido, digite novamente: ");
        scanf("%d", &K);
    }
    int vetor[K];
    printf("Digite os valores:\n");
    for (int i = 0; i < K ; i++)
    {
        scanf("%d", &termo);
        vetor[i] = termo ;
    }
    for (int i = 0; i < K ; i++)
    {
        for(int j = vetor[i];j >= 0 ; j-- )
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}