/*Estudo Dirigido 2 questao 2-b
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
    double primeiro , segundo , produto;
    printf("Digite os numeros que deseja realizar a conta:\n");
    scanf("%lf", &primeiro);
    scanf("%lf", &segundo);
    produto = primeiro * (segundo * segundo);
    printf("O resultado eh igual a %lf", produto);
    return 0;
}