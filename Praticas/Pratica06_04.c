/*Pratica 6 questao 4
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    int linha, coluna;
    printf("\nDigite a linha em que o Bisco se encontra: ");
    scanf("%d", &linha);
    printf("\nDigite a coluna em que o Bisco se encontra: ");
    scanf("%d", &coluna);

    printf("      1  2  3  4  5  6  7  8\n");
    printf("    -------------------------\n");

    int l, c, diagonalp, diagonaln;
    l = 1;

    diagonalp = linha + coluna;
    diagonaln = linha - coluna;

    while (l <= 8)
    {

        printf(" %d |", l);

        c = 1;

        while (c <= 8)
        {
            if (l + c == diagonalp || l - c == diagonaln)
            {
                printf("  x");
            }
            else
            {
                printf("  -");
            }
            c++;
        }
        l++;
        printf("\n");
    }
}
