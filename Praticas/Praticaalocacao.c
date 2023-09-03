/*Pratica questão 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <stdlib.h>

int **criaMatriz(int n);

int testarmatriz(int **matriz2, int n);

void liberaMatriz(int **matriz2, int n);

int main()
{
    int n, resultado;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int **matriz2 = criaMatriz(n);

    printf("Digite os valores da matriz n x n:\n");
    for (int i = 0; i < n; i++)
    {
        matriz2[i] = malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }

    resultado = testarmatriz(matriz2, n);

    if (resultado == 1)
    {
        printf("Esta matriz é um quadrado mágico!\n");
    }
    else
    {
        printf("Esta matriz não é um quadrado mágico!\n");
    }

    liberaMatriz(matriz2, n);

    return 0;
}

int **criaMatriz(int n)
{
    int **matriz;
    
    matriz = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        matriz[i] = malloc(n * sizeof(int));
    }
    return matriz;
}

int testarmatriz(int **matriz2, int n)
{
    int coluna, linha, diagPrincipal, diagSecundaria , retorno ;
    coluna = 0;
    linha = 0;
    diagPrincipal = 0;
    diagSecundaria = 0;

    for (int i = 0; i < n; i++)
    {
        coluna += matriz2[i][0];
    }

    for (int j = 0; j < n; j++)
    {
        linha += matriz2[0][j];
    }

    for (int i = 0; i < n; i++)
    {
        diagPrincipal += matriz2[i][n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        diagSecundaria += matriz2[i][i];
    }

    if (coluna == linha)
    {
        if (coluna == diagPrincipal)
        {
            if (coluna == diagSecundaria)
            {
                retorno = 1;
            }
        }
    }
    else
    {
        retorno = 0;
    }
    return retorno;
}

void liberaMatriz(int **matriz2, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(matriz2[i]);
    }
    free(matriz2);
}
