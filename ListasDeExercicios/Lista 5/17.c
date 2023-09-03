#include <stdio.h>

#define K 100

int main()
{
    int A[K][K],B[K][K],C[K][K];
    int dimensao1 , dimensao2 ;
    printf("Digite o tamanho de x da matriz [x][y]\n");
    scanf("%d", &dimensao1);
    printf("Digite o tamanho de y da matriz [x][y]\n");
    scanf("%d", &dimensao2);
    for(int i = 0; i < dimensao1 ; i++)
    {
        for(int j = 0 ; j < dimensao2 ; j++)
        {
            printf("Valor matrizA[%d][%d] = ", i + 1 , j + 1 );
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < dimensao1 ; i++)
    {
        for(int j = 0 ; j < dimensao2 ; j++)
        {
            printf("Valor matrizB[%d][%d] = ", i + 1 , j + 1 );
            scanf("%d", &B[i][j]);
        }
    }
    for(int i = 0; i < dimensao1 ; i++)
    {
        for(int j = 0; j < dimensao2 ; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
            printf("Matriz C[%d][%d] = %d\n", i + 1,j + 1, C[i][j]);
        }
    }



    return 0;
}