/*Estudo Dirigido 4 questao 4.13
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
int main()
{
    int i = 3 , produto = 1 ;

    while (i <= 15)
    {
        if (i % 2 != 0)
        {
            produto *= i;
        }
     i++;
    }
    printf("O produto dos números ímpares é %d \n.", produto);
    return 0;
}