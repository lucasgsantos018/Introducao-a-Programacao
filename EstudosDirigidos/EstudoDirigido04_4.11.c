/*Estudo Dirigido 4 questao 4.11
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    int numero, menor, i = 1, nmrTotal;
    printf("Digite o número de inteiros que será utilizado para saber qual o menor:\n");
    scanf("%d", &nmrTotal);

    while (nmrTotal <= 0)
    {
        printf("Erro , digite um número maior que 0: ");
        scanf("%d", &nmrTotal);
    }

    printf("Digite um dos números:\n");
    scanf("%d", &numero);
    menor = numero;

    while (i < nmrTotal)
    {
        if (numero < menor)
        {
            menor = numero;
        }
        i++;

        printf("Digite outro número,restam %d valores restantes:", nmrTotal - i);
        scanf("%d", &numero);
    }
    printf("O menor valor é %d \n.", menor);
    return 0;
}