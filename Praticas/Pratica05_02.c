/*Prática 5 questao 2
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float calculaRaizes(float a ,float b ,float c,float *raiz1,float *raiz2);

float calculaRaizes(float a,float b, float c ,float *raiz1, float *raiz2){
    float delta;

    delta = (pow(b , 2)) - (4 * a * c);
    if (delta >= 0){
        *raiz1 = ( (-b) + (sqrt(delta))) / (2 * a);
        *raiz2 = ( (-b) - (sqrt(delta))) / (2 * a);
        return 1;
        
    }
    else {
        printf("Raiz não real.\n");
        return 0;
    }
}

int main(){
    float a , b , c ;
    printf("Digite os valores da expressão ax2 + bx + c = 0 para calcular as raízes:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float raiz1 , raiz2 ;
    calculaRaizes(a , b, c , &raiz1 , &raiz2);
    printf("Raiz 1 = %.2f\n", raiz1);
    printf("Raiz 2 = %.2f\n", raiz2);

    return 0;
}
