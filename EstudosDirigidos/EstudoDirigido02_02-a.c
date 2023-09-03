/*Estudo Dirigido 2 questao 2-a
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main() 
{
    double x , y , soma;
    printf("Digite os valores que deseja somar:\n");
    scanf("%lf" , &x);
    scanf("%lf" , &y);
    soma = x + y;
    printf("A soma eh igual a %lf.\n", soma);
    return 0;
}