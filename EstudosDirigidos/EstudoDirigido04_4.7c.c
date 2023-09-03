/*Estudo Dirigido 4 questao 4.7- C
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    for (int i = 20; i >= -10; i--)
    {
        printf("%d ", i);
        i -= 5;
    }
    printf("\n");
    return 0;
}