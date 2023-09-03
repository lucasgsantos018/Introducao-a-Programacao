/*Estudo Dirigido 2 questao 2-d
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Digite o valor para realizar a raiz quadrada da soma dos quadrados:\n");
    scanf("%lf", &x);
    double resultado = sqrt(pow( x , 2 ) + pow( x , 2));
    printf("O resultado eh igual a %lf.\n", resultado);
    return 0;
}