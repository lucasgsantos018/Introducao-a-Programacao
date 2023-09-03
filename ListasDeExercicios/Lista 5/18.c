#include <stdio.h>

#define K 3

int main()
{
    int matriz[K][K], soma1j = 0, produto1j = 1 , somatotal = 0;

    for(int i = 0;i < K ; i++)
    {
        for(int j = 0; j < K ; j++)
        {
            printf("Digite o valor [%d][%d]: ", i + 1 , j + 1);
            scanf("%d", &matriz[i][j]);
        }

    }

    for(int j = 0 ; j < K ; j++)
    {
        soma1j += matriz[0][j];
        produto1j *= matriz[0][j];
    }
    for(int i = 0;i < K ; i++)
    {
        for(int j = 0 ; j < K ; j++)
        {
            somatotal += matriz[i][j];
        }
    }
    printf("Soma da primeira coluna: %d\n", soma1j );
    printf("Produto da primeira coluna: %d\n", produto1j );
    printf("Soma de todos os elementos da matriz: %d\n", somatotal );
    return 0;
}