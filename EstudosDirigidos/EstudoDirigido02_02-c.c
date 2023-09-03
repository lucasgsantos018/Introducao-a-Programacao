/*Estudo Dirigido 2 questao 2-c
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    double x , quadrado ;
    printf("Digite um numero para ser elevado ao quadrado.\n");
    scanf("%lf", &x);
    quadrado = x * x ;
    printf("O quadrado desse numero eh %lf.\n", quadrado);
    return 0;
}