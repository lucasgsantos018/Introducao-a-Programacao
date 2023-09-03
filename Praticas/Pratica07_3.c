/*Pratica 7 questao 3
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    int x, y, i = 0;
    int aux = 0;

    printf("Digite os valores de x e y :\n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    int linha = ((y - x) / 2) + 1;

    while (x % 2 != 0 || y % 2 != 0)
    {
        printf("Apenas números pares são aceitos,digite novamente:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }

    while (x > y)
    {
        printf("Erro: x deve ser menor que y, digite os valores novamente:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }


    while (linha > i)
    {
        while(aux < y)
        {
            printf("*");
            aux++;
        }
        aux = 0; 
        i++;
        y -= 2;
        printf("\n");
    }
    
    return 0;
}