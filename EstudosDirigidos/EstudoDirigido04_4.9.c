/*Estudo Dirigido 4 questao 4.9
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    int soma , aux , nmrTotal , i = 1 ;
    soma = 0;
    printf("Digite o número de valores que serão somados:\n");
    scanf("%d", &nmrTotal);

    while(i <= nmrTotal)
    {
        printf("Digite um dos valores a ser somado:\n");
        scanf("%d", &aux);
        soma += aux;
        i++;
    }
    printf("Os %d valores somados dão: %d .\n", nmrTotal , soma );
    return 0;
}