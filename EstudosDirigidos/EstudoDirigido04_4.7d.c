/*Estudo Dirigido 4 questao 4.7- D
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    int x , aux ;
    x = 19;
    aux = 0;

    for (int i = 1; i <= 5 ; i++)
    {
        printf("%d ", x);
        
        aux = x;
        
        x = aux + 8;
    }
    printf("\n");
    return 0;
}
