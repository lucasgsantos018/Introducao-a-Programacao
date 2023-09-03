/*Estudo Dirigido 3 questao 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <math.h>

double Area(int raio);

double Area(int raio){
    const double pi = 3.141592653589;
    return pi * pow(raio,2);
}

int main (){
    double area;
    int raio;
    printf("Digite o valor do raio(apenas numeros inteiros):\n");
    scanf("%d", &raio);
    area = Area(raio);
    printf("O valor da area eh %.2lf\n", area );

    return 0;
}