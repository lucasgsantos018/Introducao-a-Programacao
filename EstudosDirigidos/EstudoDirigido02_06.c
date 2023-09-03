/*Estudo Dirigido 2 questao 6
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    double r1 , r2 , re ;
    printf("Digite o valor das 2 resistencias:\n");
    scanf("%lf", &r1);
    scanf("%lf", &r2);
    re = r1 + r2;
    printf("O valor da resistencia equivalence eh %lf.\n", re);
    return 0;
}