/*Questao 5 pratica 09
/ Lucas Gomes dos Santos
/ Matricula: 20.1.4108
/ Turma 43
*/

#include <stdio.h>
void maiormenor(int *vetor,int n , int *maior  , int *menor );

void maiormenor(int *vetor , int n ,int *maior ,int *menor)
{
    *maior = vetor[0];
    *menor = vetor[0];
    for(int i = 0; i < n ; i++)
    {
        if (vetor[i] > *maior)
        {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor)
        {
            *menor = vetor[i];
        }

    }
}

int main()
{
    int valores  , maior , menor , n ;
    printf("Digite quantos termos terá ao total: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0 ; i < n ; i++)
    {
       printf("Digite o %d número: ", i + 1);
       scanf("%d", &valores);
       vetor[i] = valores ;
    }

    maiormenor(vetor , n , &maior , &menor);
    printf("Maior = %d \t Menor = %d \n", maior , menor );

    return 0;
}
