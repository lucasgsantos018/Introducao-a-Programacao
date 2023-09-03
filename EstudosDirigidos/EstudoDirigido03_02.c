/*Estudo Dirigido 3 questao 2
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <math.h>

double Volume(double raio);

double Volume(double raio){
    const float pi = 3.141592653589;
    return (4 * pi * (pow(raio,3))) / 3;
}

int main (){
    double raio , volume ;
    printf("Digite o valor do raio para obter o volume:\n");
    scanf("%lf", &raio);
    volume = Volume(raio);
    printf("O volume eh igual a %.2lf\n", volume);
}
