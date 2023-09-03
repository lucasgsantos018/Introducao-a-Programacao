/*Pratica 7 questao 2
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <math.h>
double funcaopi(double termos);

double funcaopi(double termos)
{
    double equacao = 0, pi ;
    int sinal = 1;
    for(int i = 0;i < termos; i++)
    {
        equacao += sinal * (1 / pow (( 1 + i * 2), 3));
        sinal *= -1;
    }
    pi = cbrt(equacao * 32);
    return pi;
}


int main()
{
    double termos, s , pi ;
    
    printf("Digite o número de termos: \n");
    scanf("%lf", &termos);

    pi = funcaopi(termos);
    printf("PI = %lf \n", pi);
    return 0;

}