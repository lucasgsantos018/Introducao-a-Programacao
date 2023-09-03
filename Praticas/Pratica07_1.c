/*Prática 7 questao 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    int p = 0, n = 0, nmr;

    printf("\nDigite um número real ( parar = 0 ) : ");
    scanf("%d", &nmr);

    while (nmr != 0)
    {
        if (nmr > 0)
        {
            p++;
        }
        else
        {
            n++;
        }
        scanf("%d", &nmr);
    }


    printf("\nQuantidade de positivos digitados: %d\n", p);
    printf("\nQuantidade de negativos digitados: %d\n", n);

    return 0;
}