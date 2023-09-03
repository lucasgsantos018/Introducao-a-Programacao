/*Pratica 6 questao 3
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("\nDigite os valores de x e y:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    int i = 1, linhas = (y - x) / 2 + 1;
    int espaco = (y - x) / 2 , e = 0 ;



    if (x % 2 == 0 && y % 2 == 0 && x < y)
    {
        while (i <= linhas)
        {

            while (e < espaco)
            {
                printf(" ");
                e++;
            }
            e = 0;
            while (e < x)
            {
                printf("*");
                e++;
            }
            printf("\n");
            i++;
            e = 0;
            espaco -= 1;
            x += 2;
               
        }
        
    }
    else
    {
        printf("Erro: apenas números pares são aceitos e x deve ser maior que y.\n");
        exit(-1);
    }

    return 0;
}