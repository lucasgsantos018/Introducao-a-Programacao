/*Estudo Dirigido 2 questao 2-e
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x , y , seno;
    printf("Digite o valor de dois numeros para obter o seno da diferença entre eles.\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    seno = sin( x - y );
    printf("O seno da diferença eh igual a %lf.\n", seno);
    return 0;

}