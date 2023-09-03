/*Estudo Dirigido 4 questao 4.10
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    int media, nmrTotal, soma, aux;
    soma = 0;

    printf("Digite o número de inteiros que deseja fazer a média:\n");
    scanf("%d", &nmrTotal);

    for (int i = 0; i < nmrTotal; i++)
    {
        printf("Digite um dos números que deseja a média:\n");
        scanf("%d", &aux);

        soma += aux;
    }
    media = soma / nmrTotal;

    printf("A média entre os números é: %d .\n", media);
    return 0;
}