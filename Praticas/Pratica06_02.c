/*Pratica 6 questao 2
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int ehPrimo(int n);

int main()
{
    int n, result;
    printf("\nDigite um número natural para saber se ele é primo ou não: ");
    scanf("%d", &n);

    result = ehPrimo(n);

    if (result != 0)
    {
        printf("\n%d é um número primo.\n", n);
    }
    else
    {
        printf("\n%d NÃO é um número primo\n.", n);
    }

    return 0;
}

int ehPrimo(int n)
{
    int i = 1, s = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            s++;
        }
        i++;
    }
    if (s == 2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}