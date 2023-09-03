/*Pratica questão 2
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#define K 4
#define k 2

typedef struct
{
    int numerador;
    int denominador;
} Racional;

int equal(Racional r1, Racional r2);

int main()
{
    Racional r1, r2;
    int resultado;
    printf("Digite o numerador e denominador de r1: ");
    scanf("%d %d", &r1.numerador, &r1.denominador);

    printf("Digite o numerador e denominador de r2: ");
    scanf("%d %d", &r2.numerador, &r2.denominador);
    resultado = equal(r1, r2);
    if (resultado == 1)
        printf("São iguais!!\n");
    if (resultado == 0)
        printf("São diferentes!!\n");

    return 0;
}

int equal(Racional r1, Racional r2)
{
    int aux[K] = {r1.numerador, r1.denominador, r2.numerador, r2.denominador}, resto = 0, mdc[k];

    do
    {
        resto = r1.numerador % r1.denominador;
        r1.numerador = r1.denominador;
        r1.denominador = resto;
    } while (resto != 0);

    mdc[0] = r1.numerador;
    r1.numerador = aux[0];
    r1.denominador = aux[1];

    do
    {
        resto = r2.numerador % r2.denominador;
        r2.numerador = r2.denominador;
        r2.denominador = resto;
    } while (resto != 0);

    mdc[1] = r2.numerador;
    r2.numerador = aux[2];
    r2.denominador = aux[3];

    r1.numerador /= mdc[0];
    r1.denominador /= mdc[0];
    r2.numerador /= mdc[1];
    r2.denominador /= mdc[1];

    if (r1.numerador == r2.numerador && r1.denominador == r2.denominador)
        return 1;
    else
        return 0;
}