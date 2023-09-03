/*Estudo Dirigido 2 questao 3
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int x , y , soma;
    x = rand() % 6 + 1;
    y = rand() % 6 + 1;
    soma = x + y;
    printf("Primeiro dado = %d,Segundo dado = %d, Soma dos dados = %d.\n", x , y , soma);
    return 0;
}