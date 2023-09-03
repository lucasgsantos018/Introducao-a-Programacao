/*Estudo Dirigido 2 questao 2-f
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero inteiro para obter seu modulo:\n");
    scanf("%d", &x);
    int modulo = abs(x);
    printf("O modulo do numero eh %d.\n", modulo);
    return 0;

}