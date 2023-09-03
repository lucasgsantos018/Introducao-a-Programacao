/*Pratica 11 questao 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/
#include <stdio.h>

#define K 10

void lermatriz(int A[][K], int m, int p, int B[][K], int q, int n);

void imprimirmatriz(int C[][K], int m, int n);

int main()
{
    int A[K][K], B[K][K], C[K][K], m, n, p, q;
    printf("Digite o tamanho de m e p da matrizA[m][p]: ");
    scanf("%d", &m);
    printf("Digite o tamanho de p na matrizA[m][p]: ");
    scanf("%d", &p);
    printf("Digite o tamanho de q da matrizB[q][n]: ");
    scanf("%d", &q);
    printf("Digite o tamanho de n na matrizB[q][n]: ");
    scanf("%d", &n);
    while (p != q)
    {
        printf("O valor de p e q devem ser iguais!\n");
        printf("Digite novamente o tamanho de p: ");
        scanf("%d", &p);
        printf("Digite novamente o tamanho de q: ");
        scanf("%d", &q);
    }
    lermatriz(A, m, p, B, q, n);

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < p - 1; k++)
            {
                C[i][j] = A[i][k] * B[k][j];
            }
        }
    }

    imprimirmatriz(C, m, n);

    return 0;
}

void lermatriz(int A[][K], int m, int p, int B[][K], int q, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Digite o valor da matrizA[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Digite o valor da matrizB[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
}

void imprimirmatriz(int C[][K], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("MatrizC[%d][%d] = %d \n", i + 1, j + 1, C[i][j]);
        }
    }
}