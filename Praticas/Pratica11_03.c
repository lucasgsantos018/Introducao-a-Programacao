/*Pratica 11 questao 3
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

#define K 10

void lermatriz(int A[][K], int n);
void imprimirtrans(int transA[][K], int n);

int main()
{
    int n, A[K][K], transA[K][K];
    printf("Digite o tamanho n da matrizA[n][n]: ");
    scanf("%d", &n);
    lermatriz( A, n );


    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            transA[i][j] = A[j][i];
        }
        
    }

    imprimirtrans(transA, n);
    return 0;
    
}

void lermatriz(int A[][K], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite o valor da matrizA[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
}
void imprimirtrans(int transA[][K], int n)
{
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            printf("Matriz transposta[%d][%d] = %d \n", i + 1 , j + 1,transA[i][j]);
        }
    }
}